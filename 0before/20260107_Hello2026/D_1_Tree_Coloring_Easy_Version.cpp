#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n;
vector<int> adj[200'001];
vector<int> drct[200'001];
bool v[200'001];

int cnt[200'001];

void solve()
{
    cin >> n;
    for(int i = 1; i<=n; i++){
        adj[i].clear();
        drct[i].clear();
    }
    memset(v, false, sizeof(bool)*(n+1));
    memset(cnt, 0, sizeof(int)*(n+1));

    for(int i = 1; i<n; i++){
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    queue<pair<int, int>> q;
    q.push({1, 0});
    v[1] = true;
    while(!q.empty()){
        auto[cur, d] = q.front();
        q.pop();
        
        cnt[d]++;

        for(int nxt: adj[cur]){
            if(v[nxt]) continue;
            drct[cur].push_back(nxt);
            v[nxt] = true;
            q.push({nxt, d+1});
        }
    }

    int ans = 0;
    for(int i = 0; i<=n; i++){
        if(cnt[i] == 0) break;
        ans = max(ans, cnt[i]);
    }
    for(int i = 1; i<=n; i++){
        ans = max(ans, (int)drct[i].size()+1);
    }
    cout << ans << '\n';
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}