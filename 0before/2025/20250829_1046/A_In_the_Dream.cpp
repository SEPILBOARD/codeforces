#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

int a, b, c, d;

void solve()
{
    cin >> a >> b >> c >> d;
    c -= a;
    d -= b;
    if(max(a, b)>2*min(a,b)+2) cout << "NO\n";
    else if(max(c, d)>2*min(c,d)+2) cout << "NO\n";
    else cout << "YES\n";
}
 
signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}