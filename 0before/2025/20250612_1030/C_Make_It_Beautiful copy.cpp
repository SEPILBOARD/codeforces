#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
#define int long long int

int n, k;
int a[5001];

void solve()
{
    cin >> n >> k;
    for(int i = 0; i<n; i++) cin >> a[i];
    
    int ans = 0;
    int acnt = 0;
    for(int i = 0; i<n; i++){
        if(a[i]%2 == 0) acnt++;

        for(int j = 0; j<32; j++){
            if(a[i]&(1LL<<j)){
                // cout << a[i] <<": " << j <<"\n";
                ans++;
            }
        }
        // cout << a[i] <<": " <<ans <<"\n";
    }
    cout << ans + min(k, acnt) <<"\n";
}
 
signed main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}