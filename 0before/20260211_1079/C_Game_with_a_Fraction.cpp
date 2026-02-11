#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

ll p, q;

void solve()
{
    cin >> p >> q;
    // if(p<2 && q<3){
    //     cout << "Alice\n";
    //     return;
    // }

    ll itv = min(p/2, q/3);
    if(q-p <= itv && q-p > 0) cout << "Bob\n";
    else cout << "Alice\n";
    // cout << itv << '\n';
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}