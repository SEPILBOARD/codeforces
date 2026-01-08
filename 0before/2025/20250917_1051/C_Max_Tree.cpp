#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

int n;
vector<int> adj[200'001];
int idg[200'001];
int ans[200'001];

void solve()
{
    cin >> n;
    for(int i = 0; i<n-1; i++){
        int u, v, x, y;
        cin >> u >> v >> x >> y;
        if(x > y){
            adj[u].push_back(v);
            idg[v]++;
        }
        else{
            adj[v].push_back(u);
            idg[u]++;
        }
    }

    queue<int> q;
    for(int i = 1; i<=n; i++){
        if(idg[i] == 0){
            q.push(i);
        }
    }

    int cur = n;
    while(!q.empty()){
        int v = q.front();
        q.pop();
        ans[v] = cur--;
        for(int e: adj[v]){
            idg[e]--;
            if(idg[e] == 0) q.push(e);
        }
    }

    for(int i = 1; i<=n; i++){
        cout << ans[i] <<" ";
    }
    cout << "\n";

    for(int i = 1; i<=n; i++){
        adj[i].clear();
        idg[i] = 0;
    }
}
 
signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}