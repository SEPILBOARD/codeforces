#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
#define int long long int

int n;
vector<int> adj[200'001];
int a[200'001];
int ans[200'001];
bool v[200'001];

void solve()
{
    cin >> n;
    for(int i = 1; i<=n; i++){
        cin >> a[i];
        adj[i].clear();
        v[i] = false;
    }
    for(int i = 1; i<n; i++){
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    queue<pair<int,pair<int, int>>> q;
    v[1] = true;
    q.push({1, {0,0}});
    while(!q.empty()){
        auto [node, thr] = q.front();
        auto [tx, tn] = thr;
        // cout << node <<": " << a[node] <<", " <<a[node]-thr <<"\n";
        q.pop();
        ans[node] = max(a[node], a[node]-tn);
        for(int e: adj[node]){
            if(v[e]) continue;
            v[e] = true;
            q.push({e, {max(a[node], a[node]-tn) , min(a[node]-tx, a[node])}});
        }
    }
    for(int i = 1; i<=n; i++){
        cout << ans[i] <<" ";
    }
    cout << "\n";
}
 
signed main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}