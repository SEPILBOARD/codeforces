#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
#define int long long int

int n, k;

void solve()
{
    int ans = 0;
    cin >> n >> k;
    if(n%2) cout << ((n-k)+k-2)/(k-1)+1 << "\n";
    else cout << (n+k-2)/(k-1) << "\n";
}
 
signed main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}