#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

int n;
int a[5001];

vector<int> adj[5001];
int assign[5001];
bool v[5001];

int gcd(int x, int y)
{
    if(y == 0) return x;
    return gcd(y, x%y);
}


bool dfs(int x)
{
    for(int e : adj[x]){
        if(v[e]) continue;
        v[e] = true;
        if(assign[e] == 0 || dfs(assign[e])){
            assign[e] = x;
            return true;
        }
    }
    return false;
}

void solve()
{
    memset(assign, 0, sizeof(assign));
    memset(v, false, sizeof(v));
    cin >> n;
    cin >> a[1];
    if(n==1){
        cout << "0\n";
        return;
    }
    cin >> a[2];
    int ag = gcd(a[1], a[2]);
    for(int i = 3; i<=n; i++){
        adj[i].clear();
        cin >> a[i];
        ag = gcd(ag, a[i]);
    }
    adj[1].clear();
    adj[2].clear();
    // cout << ag <<"\n";
    
    for(int i = 1; i<=n; i++){
        for(int j = i+1; j<=n; j++){
            if(gcd(a[i], a[j]) == ag){
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
    }

    int ans = 0;
    for(int i = 1; i<=n; i++){
        if(dfs(i)) ans++;
    }
    cout << n-ans/2 <<"\n";
}
 
int main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}