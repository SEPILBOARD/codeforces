#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

void solve()
{
    int n, m, p, q;
    cin >> n >> m >> p >> q;
    if(n%p!=0) cout << "YES\n";
    else{
        if((n/p)*q == m) cout << "YES\n";
        else cout << "NO\n";
    }
}
 
int main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}