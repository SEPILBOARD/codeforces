#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
 
int t;
 
void solve()
{
    int n, x, y; cin >> n >> x >> y;
    int a[1000];
    for(int i = 1; i<y; i++){
        a[i] = -1;
    }
    for(int i = y; i<=x; i++){
        a[i] = 1;
    }
    for(int i = x+1; i<=n; i++){
        a[i] = -1;
    }
    for(int i = 1; i<=n; i++){
        cout << a[i] <<" ";
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