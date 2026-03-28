#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n, m;
pair<int, int> xy[200'001];
pair<int, int> mxy[200'001];

void solve()
{
    cin >> n >> m;
    for(int i = 0; i<n; i++){
        int x, y;
        cin >> x >> y;
        xy[i] = {x, y};
    }
    for(int i = 0; i<m; i++){
        int x, y;
        cin >> x >> y;
        mxy[i] = {x, y};
    }

    vector<ll> dp(n+1, 0);
    sort(xy, xy+n, greater<>());
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
    ll tmx = -1e+9;
    ll cur = 0LL;
    for(int i = 0; i<n; i++){
        auto[x, y] = xy[i];
        pq.push({y, x});
        cur += x;
        while(!pq.empty() && pq.top().first<pq.size()){
            if(pq.top().first+1 == pq.size()){
                tmx = max(tmx, cur);
            }
            cur -= pq.top().second;
            pq.pop();
        }

        tmx = max(tmx, cur);
        dp[pq.size()] = max(dp[pq.size()], cur);
    }

    for(int i = 1; i<=n; i++){
        dp[i] = max(dp[i], dp[i-1]);
    }

    for(int i = 0; i<m; i++){
        auto[x, y] = mxy[i];
        cout << max(tmx, dp[y]+x) <<" ";
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