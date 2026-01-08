#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
 
int t;
 
void solve()
{
    int n, x, y; cin >> n >> x >> y;
    for(int i = 1; i<=n; i++){
        if(i == x || i == y) cout << "1 ";
        else cout << "-1 ";
    }
    cout << "\n";
}
 
int main()
{
    FASTIO;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}