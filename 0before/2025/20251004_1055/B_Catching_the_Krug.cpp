#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

ll n, rk, ck, rd, cd;

void solve()
{
    cin >> n >> rk >> ck >> rd >> cd;
    
    if(rk == rd){
        ll ans = ((ck<cd)?cd:(n-cd));
        cout << ans <<"\n";
        return;
    }
    if(ck == cd){
        ll ans = ((rk<rd)?rd:(n-rd));
        cout << ans <<"\n";
        return;
    }

    long long rs = ((rk<rd)?0:n);
    long long cs = ((ck<cd)?0:n);
    ll ans = max(abs(rd-rs), abs(cd-cs));
    cout << ans <<"\n";
}
 
signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}