#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n;
int a[10];

void solve()
{
    bool flag = false;
    cin >> n;
    for(int i = 0; i<n; i++){
        cin >> a[i];
        if(a[i] == 67) flag = true;
    }

    if(flag) cout << "YES\n";
    else cout << "NO\n";
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}