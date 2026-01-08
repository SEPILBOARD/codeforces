#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n, k;
int a[200'001];
int b[200'001];

void solve()
{
    cin >> n >> k;
    for(int i = 0; i<n; i++) cin >> a[i];
    for(int i = 0; i<k; i++) cin >> b[i];

    sort(a, a+n, greater<int>());
    sort(b, b+k);

    ll ans = 0ll;
    int idx = 0;
    for(int i = 0; i<k; i++){
        int eidx = idx+b[i]-1;
        while(idx<eidx && idx<n){
            ans += a[idx];
            idx++;
        }
        idx++;
        // cout << ans << "\n";
    }
    for(int i = idx; i<n; i++){
        ans += a[i];
    }
    cout << ans <<"\n";
}
 
signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}