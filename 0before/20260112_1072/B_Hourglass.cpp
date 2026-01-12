#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

ll s, k, m;

void solve()
{
    cin >> s >> k >> m;

    ll r = min(s, k);
    
    if(k>s || (m/k)%2 == 0){
        r = s;
    }
    else{
        r = k;
    }
    cout << max(0LL, r-m%k) <<"\n";
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}