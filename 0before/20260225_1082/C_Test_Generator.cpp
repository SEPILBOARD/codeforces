#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

ll s, m;
ll acnt[64];

void solve()
{
    memset(acnt, 0, sizeof acnt);
    cin >> s >> m;

    ll k = (s+m-1)/m;
    ll a = m*k-s;

    for(int i = 0; i<=60; i++){
        if(a&(1LL<<i)){
            acnt[i] = 1;
        }
    }

    for(int i = 60; i>=1; i--){
        if(acnt[i]>k){
            bool flag = false;
            for(int j = i-1; j>=0; j--){
                k *= 2LL;
                if(m&(1LL<<j)){
                    flag = true;
                    break;
                }
            }
            if(!flag){
                cout << "-1\n";
                break;
            }
            continue;
        }

        if(m&(1LL<<i)) continue;
        
        acnt[i-1] += 2LL*acnt[i];
    }

    if(acnt[0]>k || (!(m&1) && acnt[0])){
        cout << "-1\n";
        return;
    }
    cout << k <<"\n";
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}