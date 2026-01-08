#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n;
ll b[100'001];
int ans[100'001];

void solve()
{
    cin >> n;
    for(int i = 1; i<=n; i++) cin >> b[i];

    int num = 0;
    for(int i = 1; i<=n; i++){
        ll idx = b[i] - b[i-1];
        if(i-idx == 0) ans[i] = ++num;
        else ans[i] = ans[i-idx];
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