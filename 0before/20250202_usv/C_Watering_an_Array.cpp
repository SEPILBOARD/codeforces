#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
#define int long long int

int t;
int a[200000];
int b[200000];
void solve()
{
    int n, k, d; cin >> n >> k >> d;
    int ans = 0;
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    for(int i = 0; i<k; i++){
        cin >> b[i];
    }
    for(int i = 0; i<=min(2*n,d); i++){
        int s = 0;
        for(int j = 0; j<n; j++){
            if(a[j] == j+1) s++;
        }
        for(int j = 0; j<b[i%k];j++) a[j]++;
        ans = max(ans, s+ (d-i-1)/2);
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