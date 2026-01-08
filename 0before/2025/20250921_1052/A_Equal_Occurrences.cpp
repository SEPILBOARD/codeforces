#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n;
int cnt[101];

void solve()
{
    cin >> n;
    for(int i = 0; i<n; i++){
        int a;
        cin >> a;
        cnt[a]++;
    }
    int ans = 0;
    for(int i = 0; i<=100; i++){
        int len = 0;
        for(int j = 1; j<=n; j++){
            if(cnt[j] < i) continue;
            len += i;
        }
        ans = max(ans, len);
    }
    cout << ans <<"\n";

    memset(cnt, 0, sizeof(cnt));
}
 
signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}