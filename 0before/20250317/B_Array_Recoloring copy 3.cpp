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

    if(k == 1){
        int m = 0;
        for(int i = 1; i<n-1 ;i++){
            m = max(m, a[i]);
        }
        int ans = max(m+a[0], m+a[n-1]);
        cout << ans <<"\n";
        return;
    }

    sort(v.begin(),v.end(), compare);
    int m = 0;
    int sidx = n; int eidx = -1; 
    int ksum = 0;
    for(int i = 0; i<k; i++){
        ksum += v[i].first;
        sidx = min(sidx, v[i].second);
        eidx = max(eidx, v[i].second);
    }
    for(int i = sidx+1; i<eidx; i++){
        m = max(m, a[i]);
    }
    ans = ksum + m;
    int tans = 0;
    int tm = a[sidx];
    for(int i = sidx-1; i>=0; i--){
        tm = max(tm, a[i+1]);
        tans = max(tans, ksum - a[sidx] + a[i] + tm);
    }
    ans = max(ans, tans);
    tans = 0;
    tm = a[eidx];
    for(int i = eidx+1; i<n; i++){
        tm =max(tm, a[i-1]);
        tans = max(tans, ksum - a[eidx] + a[i] + tm);
    }
    ans = max(ans, tans);
    cout << ans <<"\n";
}

signed main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}