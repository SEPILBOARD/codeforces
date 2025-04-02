#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
#define int long long int

int n, k;
int a[5001];

bool compare(int a, int b){
    return a > b;
}

void solve()
{
    cin >> n >> k;
    for(int i = 0; i<n; i++) cin >> a[i];

    if(k == 1){
        int m = 0;
        for(int i = 1; i<n-1 ;i++){
            m = max(m, a[i]);
        }
        int ans = max(a[0], a[n-1]) + max(m, min(a[0],a[n-1]));
        cout << ans <<"\n";
        return;
    }

    sort(a, a+n, compare);
    int ans = 0;
    for(int i = 0; i<=k; i++){
        ans += a[i];
    }
    cout << ans <<"\n";
}

signed main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}