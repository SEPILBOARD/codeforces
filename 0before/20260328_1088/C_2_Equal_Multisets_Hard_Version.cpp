#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n, k;
int a[200'001];
int b[200'001];

void solve()
{
    cin >> n >> k;
    for(int i = 0; i<n; i++) cin >> a[i];
    for(int i = 0; i<n; i++) cin >> b[i];

    if(k == 1){
        for(int i = 0; i<n; i++){
            if(b[i] == -1) continue;
            if(b[i] != a[i]){
                cout << "NO\n";
                return;
            }
        }
        cout << "YES\n";
        return;
    }

    vector<int> mode(k);
    for(int i = 0; i<k; i++){
        mode[i] = a[i];
    }
    for(int i = k; i<n; i++){
        if(a[i] != mode[i%k]) mode[i%k] = -1;
    }

    vector<int> bmode(k, -1);
    for(int i = 0; i<n; i++){
        if(b[i] == -1) continue;
        bmode[i%k] = b[i];
    }

    for(int i = 0; i<n; i++){
        if(mode[i%k] == -1){
            if(b[i] != -1 && b[i] != a[i]){
                cout << "NO\n";
                return;
            }
        }
        else{
            if(b[i] != -1){
                if(bmode[i%k] == -1) bmode[i%k] = b[i];
                else if(bmode[i%k] != b[i]){
                    cout << "NO\n";
                    return;
                }
            }
        }
    }

    vector<int> acnt(n+1, 0);
    vector<int> bcnt(n+1, 0);
    for(int i = 0; i<k; i++){
        if(mode[i] != -1){
            acnt[mode[i]]++;
            if(bmode[i] != -1) bcnt[bmode[i]]++;
        }
    }

    for(int i = 1; i<=n; i++){
        if(bcnt[i]>acnt[i]){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}