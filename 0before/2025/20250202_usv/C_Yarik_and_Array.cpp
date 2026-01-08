#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
#define int long long int
 
int t;
 
void solve()
{
    int n; cin >> n;
    int a[200001];
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    int ans = a[0];
    int sum = a[0];
    for(int i = 1; i<n; i++){
        if(sum < 0 || abs(a[i])%2 == abs(a[i-1])%2) sum = a[i];
        else sum += a[i];
        ans = max(ans, sum);
    }
    cout << ans << "\n";
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
