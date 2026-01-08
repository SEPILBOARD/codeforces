#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
#define MOD 1'000'000'007

int p[200'001];
long long int facto[200'001];

int Find(int x)
{
    if(x == p[x]) return x;
    return p[x] = Find(p[x]);
}

void Union(int x, int y)
{
    x = Find(x);
    y = Find(y);
    if(x == y) return;
    if(x<y) p[y] = x;
    else p[x] = y;
}

int n, m;
vector<int> adj[200'001];
int cnt[200'001];
bool v[200'001];

void solve()
{
    long long int ans = 2;
    cin >> n >> m;
    for(int i = 1; i<=n; i++){
        v[i] = false;
        cnt[i] = 0;
        p[i] = i;
        adj[i].clear();
    }

    bool flag = true;
    for(int i = 0; i<m; i++){
        int s, e; cin >> s >> e;
        cnt[s]++;
        cnt[e]++;
        adj[s].push_back(e);
        adj[e].push_back(s);
        if(Find(s) == Find(e)) flag = false;
        else Union(s, e);
    }

    if(!flag){
        cout <<"0\n";
        return;
    }

    int fs = 1;
    for(int i = 1; i<=n; i++){
        if(cnt[fs] < cnt[i]){
            fs = i;
        }
    }

    queue<pair<int, int>> q;
    q.push({fs,0});
    v[fs] = true;
    int bfscnt = 0;
    while(!q.empty()){
        auto[cur, d] = q.front();
        bfscnt = max(bfscnt, d);
        q.pop();
        
        int k = 0;
        int f = 0;
        for(int e: adj[cur]){
            if(cnt[e]>=2) k++;
            else f++;
            if(k>2){
                cout << "0\n";
                return;
            }
            
            if(v[e]) continue;
            v[e] = true;
            q.push({e, d+1});
        }
        ans = (ans*facto[f])%MOD;
    }
    if(bfscnt > 1) ans = (ans*2)%MOD;
    cout << ans <<"\n";
}
 
int main()
{
    FASTIO;
    facto[0] = 1;
    for(int i = 1; i<=200'000; i++){
        facto[i] = (facto[i-1]*i)%MOD;
    }

    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}