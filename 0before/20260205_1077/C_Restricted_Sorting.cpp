#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

struct DSU
{
    vector<int> p;
    DSU(int n=0){ init(n); }
    void init(int n)
    {
        p.resize(n+1);
        for(int i = 0; i<=n; i++) p[i] = i;
    }
    int Find(int x)
    {
        if(p[x]==x) return x;
        return p[x]=Find(p[x]);
    }
    void Union(int x, int y)
    {
        x = Find(x);
        y = Find(y);
        if(x != y) p[x] = y;
    }
};

struct NextDSU
{
    vector<int> p;
    NextDSU(int n=0){ init(n); }
    void init(int n)
    {
        p.resize(n+1);
        for(int i = 0; i<=n; i++) p[i] = i;
    }

    int Find(int x)
    {
        if(p[x]==x) return x;
        return p[x] = Find(p[x]);
    }

    void erase(int x)
    {
        p[x] = Find(x+1);
    }
};

bool v[200'005];

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    vector<pair<int, int>> vi(n);
    for(int i = 0; i<n; i++){
        cin >> a[i];
        b[i] = a[i];
        vi[i]={a[i], i};
    }

    if(is_sorted(a.begin(), a.end())){
        cout << -1 << "\n";
        return;
    }

    sort(b.begin(), b.end());
    sort(vi.begin(), vi.end());

    ll lo = 0, hi = 1e+9+1;
    while(lo + 1 < hi){
        ll k = lo+hi>>1;

        bool flag = true;
        DSU dsu(n);
        NextDSU nxt(n);
        memset(v, false, sizeof(bool)*(n+1));

        queue<int> q;

        for(int s = 0; s<n; s++){
            if(v[s]) continue;

            v[s] = true;
            nxt.erase(s);
            q.push(s);

            while(!q.empty()){
                int cur = q.front();
                q.pop();
                ll x = b[cur];

                int l = upper_bound(b.begin(), b.end(), x-k) - b.begin();
                int r = lower_bound(b.begin(), b.end(), x+k) - b.begin();

                int idx = nxt.Find(0);
                while(idx<l){
                    dsu.Union(cur, idx);
                    v[idx] = true;
                    nxt.erase(idx);
                    q.push(idx);
                    idx = nxt.Find(idx);
                }
                idx = nxt.Find(r);
                while(idx<n){
                    dsu.Union(cur, idx);
                    v[idx] = true;
                    nxt.erase(idx);
                    q.push(idx);
                    idx = nxt.Find(idx);
                }
            }
        }

        vector<vector<int>> djs(n);
        for(int i=0; i<n; i++){
            int mom = dsu.Find(i);
            djs[mom].push_back(vi[i].second);
        }

        for(int mom = 0; mom<n; mom++){
            if(djs[mom].empty()) continue;

            vector<int> cur;
            vector<int> go;

            for(int idx: djs[mom]){
                cur.push_back(a[idx]);
                go.push_back(b[idx]);
            }
            sort(cur.begin(), cur.end());
            sort(go.begin(), go.end());
            if(cur != go){
                flag = false;
                break;
            }
        }

        if(flag) lo = k;
        else hi = k;
    }

    cout << lo << "\n";
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}
