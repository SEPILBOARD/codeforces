#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n, k;
int a[100'001];

int dp[100'001][361];

int go(int idx, int mx)
{
    int &ret = dp[idx][mx];
    if(ret != -1) return ret;

    
}

void solve()
{
    cin >> n >> k;
    for(int i = 0; i<n; i++) cin >> a[i];

    dp[0][0] = 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<=k; j++){
          
        }
    }
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}