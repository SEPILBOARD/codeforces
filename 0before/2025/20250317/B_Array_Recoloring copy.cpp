#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
#define int long long int

int n, k;
int a[5001];
vector<pair<int, int>> v;

bool compare(pair<int, int> fs, pair<int, int> sc){
    if(fs.first == sc.first) return fs.second > sc.second;
    return fs.first > sc.first;
}

void solve()
{
    int ans = 0;
    v.clear();
    cin >> n >> k;
    for(int i = 0; i<n; i++){
        cin >> a[i];
        v.push_back({a[i],i});
    }
    sort(v.begin(),v.end(), compare);
    int m = 0;
    for(int i = 0; i<k; i++){
        ans += v[i].first;
        cout << v[i].second <<":\n";
        if(v[i].second>0) m = max(m, a[v[i].second-1]);
        if(v[i].second<n-1) m = max(m, a[v[i].second+1]);
    }
    cout << ans + m <<"\n";
}

signed main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}