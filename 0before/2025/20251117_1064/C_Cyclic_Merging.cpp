#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n;
int a[200'005];

void solve()
{
    cin >> n;
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }

    ll sum = 0;
    ll mx = 0;
    for(int i = 0; i<n; i++){
        ll cost = max(a[i], a[(i+1)%n]);
        sum += cost;
        mx = max(mx, cost);
    }
    cout << sum-mx <<"\n";
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}