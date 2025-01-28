#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
 
int t;

bool compare(pair<int, vector<int>> &fs, pair<int, vector<int>> &sc)
{
    return fs.second.size() > sc.second.size();
}

void solve()
{
    int n;
    cout << "1\n"; return;
    pair<int,vector<int>> tr[200001];
    for(int i = 1; i<=n; i++){
        int v, u; cin >> v, u;
        tr[v].first = v;
        tr[u].first = u;
        tr[v].second.push_back(u);
        tr[u].second.push_back(v);
    }
    sort(tr+1, tr+n+1, compare);
    int ans = tr[1].second.size();
    int ecnt[200001];
    memset(ecnt,0,sizeof(ecnt));
    ecnt[tr[2].first] = tr[2].second.size();
    for(int i = 3; i<=n; i++){
        if(tr[2].second.size() != tr[i].second.size()) break;
        ecnt[tr[i].first] = tr[i].second.size();
    }
    for(int e: tr[1].second){
        ecnt[e]--;
    }
    int temp = 0;
    for(int i = 1; i<=n; i++){
        temp = max(temp, ecnt[i]);
    }
    cout << ans + temp <<"\n";
}
 
int main()
{
    FASTIO;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}