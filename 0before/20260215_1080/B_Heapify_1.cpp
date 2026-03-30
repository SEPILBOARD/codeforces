#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n;

void solve()
{
    cin >> n;
    vector<int> a(n+1);
    for(int i = 1; i<=n; i++){
        cin >> a[i];
    }

    for(int i = 1; i<=n; i++){
        if(a[i] == i) continue;

        bool flag = false;
        int idx = 2*i;
        while(idx<=n){
            if(a[i] == idx){
                flag = true;
                break;
            }
            idx*=2;
        }

        if(i%2 == 0){
            idx = i/2;
            while(idx>0){
                if(a[i] == idx){
                    flag = true;
                    break;
                }
                if(idx%2) break;
                idx /= 2;
            }
        }
        if(!flag){
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