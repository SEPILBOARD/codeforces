#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n;
string s;

void solve()
{
    cin >> n;
    cin >> s;

    int ans = 0;
    for(int i = 0; i<n-1; i++){
        if(s[n-1] != s[i]) ans++;
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