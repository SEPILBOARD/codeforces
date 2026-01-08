#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
#define int long long int

int t;
 
void solve()
{
    int n; cin >> n;
    int a[200001];
    a[0] = 0;
    int ans = -9999999999999;
    for(int i = 1; i<=n; i++){
        int e; cin >> e;
        a[i] = a[i-1] +e;
        ans = max (ans, e);
    }
    int sidx = 1;
    while(sidx <= n){
        if(a[sidx] - a[sidx-1] > 0) break;
        sidx ++;
    }
    
    bool exmi = false;
    int svidx = 0;
    for(int i = sidx+1; i<=n; i++){
        //시작점에서 홀수번 옴 -> 짝홀 달라야함
        if(sidx > n) break;
        if((i - sidx)%2){
            if( pow((a[i]-a[i-1])%2, 2) == pow((a[sidx]-a[sidx-1])%2,2)){
                if(exmi){
                    sidx = svidx;
                    exmi = false;
                    continue;
                }
                sidx = i;
                while(sidx <= n){
                    if(a[sidx] - a[sidx-1] > 0) break;
                    sidx ++;
                }
                continue;
            }
        }
        else{
            if(pow((a[i]-a[i-1])%2,2) != pow((a[sidx]-a[sidx-1])%2,2)){
                if(exmi){
                    sidx = svidx;
                    exmi = false;
                    continue;
                }
                sidx = i;
                while(sidx <= n){
                    if(a[sidx] - a[sidx-1] > 0) break;
                    sidx ++;
                }
                continue;
            }
        }
        if(!exmi){
            if(a[i]-a[i-1] <0){
                exmi = true;
                svidx = i;
            }
        }
        ans = max(ans, a[i]-a[sidx-1]);
        // for(int j = sidx -1; j<i; j++){
        //     ans = max(ans, a[i]-a[j]);
        // }
    }
    cout << ans <<"\n";
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