#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n, s, x;

void solve()
{
    int sum = 0;
    cin >> n >> s >> x;
    for(int i = 0; i<n; i++){
        int a; cin >> a;
        sum += a;
    }

    if(s>=sum && (s-sum)%x == 0) cout << "YES\n";
    else cout << "NO\n";
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}