#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n;
int a[200'001];
int b[200'001];

void solve()
{
    ll ans = 0LL;

    cin >> n;
    for(int i = 1; i<=n; i++) cin >> a[i];
    for(int i = 1; i<=n; i++) cin >> b[i];

    vector<ll> psum(n+1, 0LL);

    sort(a+1, a+n+1);
    for(int i = 1; i<=n; i++){
        psum[i] = psum[i-1] + b[i];
    }

    for(int i = 1; i<=n; i++){
        int cnt = (n-i+1);
        int clr = upper_bound(psum.begin(), psum.end(), cnt)-psum.begin()-1;

        ans = max(ans, 1LL*a[i]*clr);

        // cout << i <<": " << a[i] <<", " << cnt <<", " << clr <<": "<< ans<<"\n";
    }
    cout << ans <<"\n";

    // cout << *lower_bound(psum.begin(), psum.end(), 1);
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}