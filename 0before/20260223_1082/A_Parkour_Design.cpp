#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

ll x, y;

void solve()
{
    cin >> x >> y;
    ll temp = x-2LL*y;
    if(temp<0 || temp%3){
        cout << "NO\n";
        return;
    }

    temp /= 3;
    if(temp>= -2LL*min(0LL, y)){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}