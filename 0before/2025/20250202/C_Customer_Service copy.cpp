#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

int a[301][301];

void solve()
{
    int gn[301] = {0, };
    int n; cin >> n;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            cin >> a[i][j];
        }
    }
    
    for(int i = n; i>0; i--){
        int cnt = 0;
        bool bkflag = false;
        for(int j = n; j>0; j--){
            if(a[i][j] != 1){
                gn[cnt]++;
                bkflag = true;
                break;
            }
            cnt++;
        }
        if(bkflag) continue;
        gn[cnt]++;
    }
    int ans = 0;
    int bg = 0;
    int cnt = 0;
    int lstans = 0;
    for(int i = 1; i<=n; i++){
        cout << gn[i] <<" ";
    }
    cout <<"\n";

    for(int i = 1; i<=n; i++){
        if(gn[i] == 0){
            bg++;
        }
        else{
            bg = max(0, bg-gn[i]);
            cnt += gn[i];
            cout << bg <<"\n";
            if(bg == 0){
                ans = i;
            }
        }
    }
    
    cout << ans +1 <<"\n";
}
 
signed main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}