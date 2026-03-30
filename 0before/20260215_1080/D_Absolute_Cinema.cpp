#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n;
ll f[300'005];

ll a[300'005];

void solve()
{
    cin >> n;
    for(int i = 1; i<=n; i++) cin >> f[i];

    for(int i = 2; i<=n-1; i++){
        a[i] = (f[i-1] - 2*f[i] +f[i+1])/2;
    }

    a[1] = f[n];
    for(int i = 2; i<=n-1; i++){
        a[1] -= (n-i)*a[i];
    }
    a[1] /= n-1;

    a[n] = f[1];
    for(int i = 2; i<=n-1; i++){
        a[n] -= (i-1)*a[i];
    }
    a[n] /= n-1;

    for(int i = 1; i<=n; i++){
        cout << a[i] <<" ";
    }
    cout << "\n";
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}