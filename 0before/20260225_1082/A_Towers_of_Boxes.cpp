#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n, m, d;

void solve()
{
    cin >> n >> m >> d;
    
    int cnt = d/m+1;
    

    cout << (n+cnt-1)/cnt <<"\n";
    
    return;
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}