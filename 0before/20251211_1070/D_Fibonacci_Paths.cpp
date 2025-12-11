#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;
#define MOD 998244353

struct Edge
{
    int u, v;
};

int n, m;
ll a[200'005];
Edge edge[200'005];

int idg[200'005];
int eidx[200'005];

ll dp[200'005];

bool compare(int fs, int sc)
{
    return a[edge[fs].v] < a[edge[sc].v];
}

void solve()
{
    cin >> n >> m;
    memset(dp, 0, sizeof(ll)*(m+1));

    for(int i = 1; i<=n; i++){
        cin >> a[i];
        idg[i] = 0;
    }

    for(int i = 0; i<m; i++){
        int v, u;
        cin >> v >> u;
        edge[i] = {v, u};
        idg[u]++;

        eidx[i] = i;
    }
    
    sort(eidx, eidx+m, compare);

    vector<map<ll, ll>> mp(n+1);
    ll ans = 0;
    for(int i = 0; i<m; i++){
        int u = edge[eidx[i]].u;
        int v = edge[eidx[i]].v;

        ll cur = 1;

        if(a[v]>a[u]){
            ll prvA = a[v]-a[u];
            if(mp[u].count(prvA)){
                cur = (cur+mp[u][prvA])%MOD;
            }
        }

        dp[eidx[i]] = cur;
        ans = (ans+cur)%MOD;

        mp[v][a[u]] = (mp[v][a[u]]+cur)%MOD;
    }

    cout << ans%MOD << '\n';
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}
