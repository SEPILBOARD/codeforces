#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
#define int long long int

int n, k;
int a[200001];

void solve()
{
    cin >> n >>k;
    int mx = 0;

    for(int i = 0; i<n; i++){
        cin >> a[i];
        mx = max(mx, a[i]);
    }

    int lo = 0, hi = n+2;
    while(lo+1 < hi){
        int mid = lo+hi >>1;
        for(int i = 0; i<n; i++){
            
        }
    } 

}
 
signed main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}