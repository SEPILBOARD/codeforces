#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n;
ll c, k;

void solve()
{
    cin >> n >> c >> k;
    vector<ll> a(n);
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    ll cur = c;
    ll curk = k;
    for(int i = 0; i<n; i++){
        if(cur<a[i]) break;

        ll u = min(curk, max(0ll, cur-a[i]));
        curk -= u;
        cur += a[i]+u;
    }

    cout << cur <<"\n";
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}