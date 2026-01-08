#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
#define int long long int

int n;
pair<int, int> x[200'001];
pair<int, int> y[200'001];

void solve()
{
    cin >> n;
    for(int i = 0; i<n; i++){
        int xx, yy;
        cin >> xx >> yy;
        x[i] = {xx, i};
        y[i] = {yy, i};
    }

    
    if(n == 1){
        cout << "1\n";
        return;
    }
    sort(x, x+n);
    sort(y, y+n);
    int l = x[n-1].first - x[1].first+1;
    int h;
    if(y[n-1].second == x[0].second) h = y[n-2].first - y[0].first+1;
    else if(y[0].second == x[0].second) h = y[n-1].first - y[1].first+1;
    else h = y[n-1].first - y[0].first+1;
    int ans = l*h;


    int tl = x[n-2].first - x[0].first+1;
    int th;
    if(y[n-1].second == x[n-1].second) th = y[n-2].first - y[0].first+1;
    else if(y[0].second == x[n-1].second) th = y[n-1].first - y[1].first+1;
    else th = y[n-1].first - y[0].first+1;
    int tans = tl*th;
    if(tans < ans){
        l = tl;
        h = th;
        ans = tans;
    }


    if(x[n-1].second == y[0].second) tl = x[n-2].first - x[0].first+1;
    else if(x[0].second == y[0].second) tl = x[n-1].first - x[1].first+1;
    else tl = x[n-1].first - x[0].first+1;
    th = y[n-1].first - y[1].first+1;
    tans = tl*th;
    if(tans < ans){
        l = tl;
        h = th;
        ans = tans;
    }


    if(x[n-1].second == y[n-1].second) tl = x[n-2].first - x[0].first+1;
    else if(x[0].second == y[n-1].second) tl = x[n-1].first - x[1].first+1;
    else tl = x[n-1].first - x[0].first+1;
    th = y[n-2].first - y[0].first+1;
    tans = tl*th;
    if(tans < ans){
        l = tl;
        h = th;
        ans = tans;
    }

    if(ans == n-1){
        ans += min(l, h);
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