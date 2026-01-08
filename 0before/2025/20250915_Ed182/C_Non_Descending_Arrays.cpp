#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
#define MOD 998244353

int n;
int a[101];
int b[101];
int dp[101];

void solve()
{
    cin >> n;
    dp[1] = 2;
    for(int i = 1; i<=n; i++) cin >> a[i];
    for(int i = 1; i<=n; i++) cin >> b[i];

    for(int i = 2; i<=n; i++){
        dp[i] = dp[i-1];
        if(a[i-1]<=a[i] && a[i-1]<=b[i] && b[i-1]<=b[i] && b[i-1]<=a[i]){
            dp[i] = 2*dp[i]%MOD;
        }
    }
    cout << dp[n] <<"\n";
    
    memset(dp, 0, sizeof(int)*(n+1));
}
 
signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}