#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

ll n;

void solve()
{
    cin >> n;

    vector<ll> p;
    for(ll i = 2; i*i<=n; i++){
        if(n%i) continue;
        p.push_back(i);
        while(n%i == 0){
            n /= i;
        }
    }
    if(n>1){
        p.push_back(n);
    }

    ll ans = 1;
    for(ll e: p){
        ans *= e;
    }
    cout << ans << "\n";
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}