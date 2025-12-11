#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n;
char a[200'001];
bool v[200'001];

void solve()
{
    cin >> n;
    memset(v, false, sizeof(bool)*(n+1));
    for(int i = 0; i<n; i++) cin >> a[i];

    int ans = 0;
    int sidx = -1;
    for(int i = 0; i<2*n; i++){
        int idx = i%n;
        if(v[idx]) break;

        if(a[idx] == '1'){
            sidx = idx;
        }
        else{
            if(sidx == -1) continue;
            v[idx] = true;
            ans = max(ans, (idx-sidx+n)%n);
        }
    }

    cout << ans <<'\n';
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}