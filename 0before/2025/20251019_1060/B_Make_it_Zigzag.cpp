#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n;
int a[200'002];

void solve()
{
    cin >> n;
    for(int i = 1; i<=n; i++){
        cin >> a[i];
    }

    a[0] = 1e+9+2;
    int ans = 0;
    int mx = a[1];
    for(int i = 2; i<=n; i++){
        if(i%2){
            if(a[i] >= mx) ans += a[i]-mx+1;
        }
        mx = max(mx, a[i]);
    }

    if(a[1]>=a[2]) ans ++;

    cout << ans <<"\n";
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}