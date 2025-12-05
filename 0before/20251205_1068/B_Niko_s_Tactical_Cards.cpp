#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n;
ll a[100'005];
ll b[100'005];

ll mn[100'005];
ll mx[100'005];

void solve()
{
    cin >> n;
    for(int i = 1; i<=n; i++){
        cin >> a[i];
    }
    for(int i = 1; i<=n; i++){
        cin >> b[i];
    }

    for(int i = 1; i<=n; i++){
        mn[i] = min(mn[i-1]-a[i], b[i]-mx[i-1]);
        mx[i] = max(mx[i-1]-a[i], b[i]-mn[i-1]);
    }
    cout << mx[n] << '\n';
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}