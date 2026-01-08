#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n;
ll a[200'005];
ll psum[200'005];
ll absum[200'005];

void solve()
{
    psum[0] = 0ll;
    absum[0] = 0ll;

    cin >> n;
    for(int i = 1; i<=n; i++){
        cin >> a[i];
        psum[i] = psum[i-1]+a[i];
        if(i == 1) absum[i] = a[i];
        else absum[i] = absum[i-1] + abs(a[i]);
    }

    ll ans = -1e+17;
    for(int i = 1; i<=n; i++){
        ans = max(ans, absum[i-1]-(psum[n]-psum[i]));
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