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

    if(n == k){
        vector<char> v(n+1, false);
        for(int i = 0; i<n; i++){
            v[a[i]] = true;
        }

        for(int i = 0; i<n; i++){
            if(b[i] == -1) continue;
            if(!v[b[i]]){
                cout << "NO\n";
                return;
            }
            v[b[i]] = false;
        }
        cout << "YES\n";
    }

    else{
        for(int i = 0; i<n-k; i++){
            if(b[i] == -1) continue;
            if(a[i] != b[i]){
                // cout << i <<": ";
                cout << "NO\n";
                return;
            }
        }
        for(int i = k; i<n; i++){
            if(b[i] == -1) continue;
            if(a[i] != b[i]){
                // cout << i <<": ";
                cout << "NO\n";
                return;
            }
        }
        vector<char> v(n+1, false);
        for(int i = n-k; i<k; i++){
            v[a[i]] = true;
        }

        for(int i = n-k; i<k; i++){
            if(b[i] == -1) continue;
            if(!v[b[i]]){
                cout << "NO\n";
                return;
            }
            v[b[i]] = false;
        }
        cout << "YES\n";
    }
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}