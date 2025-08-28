#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

int n;
int a[200'001];
vector<int> idx[200'001];
int dp[200'001];

void solve()
{
    cin >> n;
    dp[0] = 0;
    int ans = 0;
    for(int i = 1; i<=n; i++){
        idx[i].clear();
        dp[i] = 0;
    }
    
    for(int i = 1; i<=n; i++){
        cin >> a[i];
        idx[a[i]].push_back(i);
    }
    

    for(int i = 1; i<=n; i++){
        dp[i] = max(dp[i], dp[i-1]);
        int iidx = lower_bound(idx[a[i]].begin(), idx[a[i]].end(), i) - idx[a[i]].begin();

        if(iidx+a[i]-1 >= idx[a[i]].size()) continue;
        int lidx = iidx+a[i]-1;
        // cout <<i <<": " << lidx <<"\n"; continue;

        dp[idx[a[i]][iidx+a[i]-1]] = max(dp[idx[a[i]][iidx+a[i]-1]], dp[i-1]+a[i]);
        ans = max(ans, dp[idx[a[i]][iidx+a[i]-1]]);
    }

    // for(int i = 1; i<=n; i++) cout << dp[i] <<" ";
    // cout << "\n";
    cout << ans <<"\n";
}
 
signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}