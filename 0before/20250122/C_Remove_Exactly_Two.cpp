#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
 
int t;

bool compare(vector<int> &fs, vector<int> &sc)
{
    return fs.size() > sc.size();
}

vector<int> tr[200001];
void solve()
{
    int n;
    for(int i = 1; i<=n; i++){
        tr[i].clear();
    }
    for(int i = 1; i<=n; i++){
        int v, u; cin >> v, u;
        tr[v].push_back(u);
        tr[u].push_back(v);
    }
    cout << "1: " << tr[1].size() <<" ";
    sort(tr+1, tr+n+1, compare);
    cout << tr[1].size() <<"\n";
    return;
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