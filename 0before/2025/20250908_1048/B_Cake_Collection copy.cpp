#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
#define int long long int

int n, m;
int a[100'001];

void solve()
{
    cin >> n >> m;
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }

    sort(a, a+n);
    int cnt = m;
    int ans = 0;
    for(int i = n-1; i>=0; i--){
        ans += a[i]*cnt;
        cnt--;
    }

    // int lo = -1, hi = n-1;
    // while(lo+1<hi){
    //     int mid = lo+hi>>1;
    //     int cnt = m;
    //     int tans = 0;
    //     for(int i = n-1; i>=mid; i--){
    //         tans += a[i]*cnt;
    //         cnt--;
    //     }
    //     if(tans > ans) lo = mid;
    //     else hi = mid;
    //     ans = max(ans, tans);
    // }
    cout << ans <<"\n";
}
 
signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}