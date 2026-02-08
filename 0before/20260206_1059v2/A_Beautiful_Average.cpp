#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n;
int a[11];

void solve()
{
    int ans = 0;

    cin >> n;
    for(int i = 0; i<n; i++){
        cin >> a[i];
        ans = max(ans, a[i]);
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