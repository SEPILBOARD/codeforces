#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n;
int ans[101];

void solve()
{
    cin >> n;
    int cur = n;
    memset(ans, 0, sizeof(ans));

    int idx = cur;
    while(idx>0){
        ans[idx] = cur;
        idx -= 2;
        cur--;
    }
    for(int i = 1; i<=n; i++){
        if(ans[i]) continue;
        ans[i] = cur--;
    }

    for(int i = 1; i<=n; i++){
        cout << ans[i] <<" ";
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