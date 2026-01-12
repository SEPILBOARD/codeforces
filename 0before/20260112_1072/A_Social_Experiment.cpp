#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n;

void solve()
{
    cin >> n;
    if(n<=3) cout << n <<"\n";
    else if(n%2) cout << "1\n";
    else cout << "0\n";
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}