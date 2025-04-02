#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
#define int long long int

void solve()
{
    int x, y;
    cin >> x >> y;
    int k = 28;
    int s = (x+k)^(y+k);
    cout << x + y + 2*k << " " << s;
}
 
signed main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}