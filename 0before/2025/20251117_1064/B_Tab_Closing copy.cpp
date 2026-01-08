#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

ll a, b, n;

void solve()
{
    cin >> a >> b >> n;

    ll lo = 0, hi = n+1;
    while(lo+1<hi){
        ll mid = lo+hi>>1;

        // cout <<mid <<": " << a/double(mid) <<"\n";
        if(b<=a/double(mid)) lo = mid;
        else hi = mid;
    }
    cout << n-hi+2 <<"\n";
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}