#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
#define int long long int

int a[200000];
vector<pair<int, int>> v;

void solve()
{
    v.clear();
    int n; cin>>n;
    for(int i = 0; i<n; i++) cin >> a[i];
    int ans = 0;

    bool ps, ms = false; bool cur_p = false;
    int tans = 0;
    for(int i = 0; i<n; i++){
        if(ps){
            if(cur_p){
                tans += abs(a[i]);
                if(a[i]<0) cur_p = false;
            }
            else{
                if(a[i]>0){
                    ps = false;
                    tans = a[i];
                    if(a[i]>0) {
                        ps = true;
                        cur_p = true;
                    }
                    else ms = true;
                }
                else tans += abs(a[i]);
            }
        }
        else if(ms){
            if(a[i]>0){
                ms = false;
                tans = a[i];
                if(a[i]>0) {
                    ps = true;
                    cur_p = true;
                }
                else ms = true;
            }
            else tans += abs(a[i]);
        }
        else{
            tans = abs(a[i]);
            if(a[i]>0) {
                ps = true;
                cur_p = true;
            }
            else ms = true;
        }
        ans = max(ans, tans);
    }
    cout << ans << "\n";
}
 
signed main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}