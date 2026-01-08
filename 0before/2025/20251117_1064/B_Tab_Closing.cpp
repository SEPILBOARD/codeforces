#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

ll a, b, n;

void solve()
{
    cin >> a >> b >> n;

    if(a>= n*b) cout << "1\n";
    else if( a == b) cout << "1\n";
    else cout << "2\n";
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}