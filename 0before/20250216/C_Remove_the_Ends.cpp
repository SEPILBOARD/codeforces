#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

ll a[200000];
ll ps[200000];
ll ms[200001];

void solve()
{
    memset(ps, 0, sizeof(ps));
    memset(ms, 0, sizeof(ms));
    int n; cin>>n;
    for(int i = 0; i<n; i++){
        cin >> a[i];
        if(a[i]>0){
            ps[i] = ps[i-1] + a[i];
        }
        else{
            ps[i] = ps[i-1];
        }
    }
    for(int i = n-1; i>=0; i--){
        if(a[i]<0){
            ms[i] = ms[i+1] - a[i];
        }
        else{
            ms[i] = ms[i+1];
        }
    }


    ll ans = 0;
    for(int i = 0; i<n; i++){
        ans = max(ans, ps[i] + ms[i]);
    }
    // for(int i = 0; i<n; i++){
    //     cout << ps[i] <<" ";
    // }
    // cout << "\n";
    // for(int i = 0; i<n; i++){
    //     cout << ms[i] <<" ";
    // }
    // cout << "\n";
    cout << ans <<"\n";
}
 
int main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}