#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

int a[301][301];

void solve()
{
    vector<int> gn;
    int n; cin >> n;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            cin >> a[i][j];
        }
    }
    
    for(int i = n; i>0; i--){
        int cnt = 0;
        for(int j = n; j>0; j--){
            if(a[i][j] != 1) break;
            cnt++;
        }
        gn.push_back(cnt);
    }
    sort(gn.begin(), gn.end());
    ans = 
    int ans = 0;
    
    cout << ans +1 <<"\n";
}
 
signed main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}