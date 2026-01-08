#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
#define int long long int

int t;
bool compare(pair<int, int> &fs, pair<int, int> &sc){
    if(fs.first == sc.first) return fs.second < sc.second;
    return fs.first > sc.first;
}

void solve()
{
    int n, k; cin >> n >> k;
    int b[1000];
    pair<int, int> c[1000];
    for(int i = 0; i<n; i++){
        cin >> b[i];
    }
    for(int i = 0; i<n; i++){
        int e; cin >> e;
        c[i] = {e, i};
    }
    
}
 
signed main()
{
    FASTIO;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}