#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n;
int ans[200'001];
bool v[200'001];

void solve()
{
    cin >> n;
    memset(v, false, sizeof(bool)*(n+1));

    v[1] = true;
    for(int i = 2; i<n; i++){
        ans[i] = i^1;
        v[i^1] = true;
    }
    
    ans[n] = 1;
    for(int i = 1; i<=n; i++){
        if(v[i]) continue;
        ans[1] = i;
        break;
    }
    
    for(int i = 1; i<=n; i++){
        cout << ans[i] <<' ';
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