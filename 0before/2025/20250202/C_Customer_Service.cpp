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
        int cnt = 1;
        for(int j = n; j>0; j--){
            if(a[i][j] != 1) break;
            gn[cnt]++;
            cnt++;
        }
    }
    int ans = 0;
    int somo = 0;
    if(gn[1] == 0){
        cout <<"1\n";
        return;
    }
    for(int i = 2; i<=n; i++){
        gn[i]-=somo;
        if(gn[i] == gn[i-1]){
            gn[i]--;
            somo++;
        }
        if(gn[i] <= 0){
            cout << i <<"\n";
            return;
        }
    }
    cout << n+1 <<"\n";
    return;
}
 
signed main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}