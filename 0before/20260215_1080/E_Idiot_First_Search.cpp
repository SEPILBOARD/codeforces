#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;
#define MOD 1'000'000'007

int n;
vector<int> adj[300'005];

int dp[300'005];
int ans[300'005];

int go(int cur)
{
    int &ret = dp[cur];
    if(ret != -1) return ret;

    ret = 0;
    for(int nxt: adj[cur]){
        ret = (ret+go(nxt)+2)%MOD;
    }

    return ret;
}

void dfs(int cur, int sum)
{
    ans[cur] = (sum+go(cur))%MOD;
    
    for(int nxt: adj[cur]){
        dfs(nxt, ans[cur]+1);
    }
}


void solve()
{   
    cin >> n;
    for(int i = 1; i<=n; i++){
        adj[i].clear();

        int a, b;
        cin >> a >> b;
        if(a){
            adj[i].push_back(a);
            adj[i].push_back(b);
        }
    }

    memset(dp, -1, sizeof(int)*(n+2));
    // memset(ans, -1, sizeof(int)*(n+1));
    
    dfs(1, 1);
    for(int i = 1; i<=n; i++){
        cout << ans[i] <<" ";
    }
    cout << "\n";

}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}