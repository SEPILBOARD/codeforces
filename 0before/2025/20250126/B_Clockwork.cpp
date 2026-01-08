#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
#define int long long int

int t;
 
void solve()
{
    int n; cin >> n;
    bool flag = true;
    for(int i = 1; i<=n; i++){
        int e; cin >> e;
        if(e <= max((i-1)*2, (n-i)*2)) flag = false;
    }
    if(flag) cout << "YES\n";
    else cout << "NO\n";
}
 
signed main()
{
    FASTIO;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}