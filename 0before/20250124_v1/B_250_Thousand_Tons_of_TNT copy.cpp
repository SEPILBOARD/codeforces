#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
#define int long long int
int t;
 
void solve()
{
    int n; cin >> n;
    int a[150001];
    int ans = 0;
    a[0] = 0;

    for(int i = 1; i<=n; i++){
        int e; cin >> e;
        a[i] = a[i-1] + e;
    }

    for(int k = 1; k<=n; k++){
        int maxsum = 0;
        int minsum = 999999999999999;
        for(int i = k; i<=n; i+=k){
            maxsum = max(maxsum, a[i]-a[i-k]);
            minsum = min(minsum, a[i]-a[i-k]);
        }
        cout << k <<"dlf: " << maxsum <<" " << minsum <<"\n";
        ans = max(ans, maxsum - minsum);
        cout << k <<": " << ans <<"\n";
    }
    cout << ans <<"\n";
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