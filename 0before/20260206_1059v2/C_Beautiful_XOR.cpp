#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

ll a, b;

void solve()
{
    ll ans1 = 0ll;
    ll ans2 = 0ll;

    cin >> a >> b;
    
    for(int i = 0; i<=31; i++){
        if(!(a&(1LL<<i)) && (b&(1LL<<i))){
            ans1 |= (1LL<<i);
        }
    }

    for(int i = 0; i<=31; i++){
        if((a&(1LL<<i)) && !(b&(1LL<<i))){
            ans2 |= (1LL<<i);
        }
    }

    if(ans1>a){
        cout << "-1\n";
        return;
    }
    a ^= ans1;
    if(ans2>a){
        cout << "-1\n";
        return;
    }

    cout << "2\n";
    cout << ans1 <<" " << ans2 <<"\n";

    // bitset<4>(9);
    
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}