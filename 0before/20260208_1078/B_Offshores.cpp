#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n;
ll x, y;

bool compare(ll a, ll b)
{
    return a-a/x*y > b-b/x*y;
}

void solve()
{
    cin >> n >> x >> y;
    vector<ll> a(n);
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end(), compare);

    for(int i = 1; i<n; i++){
        a[0] += a[i]/x*y;
    }
    cout << a[0] <<"\n";
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}