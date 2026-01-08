#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
#define int long long int

int a[200000];
vector<pair<int, int>> v;

void solve()
{
    v.clear();
    int n; cin>>n;
    for(int i = 0; i<n; i++) cin >> a[i];

    int idx = 0;
    while(idx<n){
        if(a[idx]>0){
            int sidx = idx;
            while(idx<n && a[idx]>0){
                idx++;
            }
            while(idx<n && a[idx]<0){
                idx++;
            }
            v.push_back({sidx, idx-1});
            if(v[v.size()-1].first != v[v.size()-1].second) idx--;
        }
        else{
            int sidx = idx;
            while(idx<n && a[idx]<0){
                idx++;
            }
            v.push_back({sidx, idx-1});
            if(v[v.size()-1].first != v[v.size()-1].second) idx--;
        }
    }
    int ans = 0;
    for(auto[s, e]: v){
        int tans = 0;
        for(int i = s; i<=e; i++){
            tans += abs(a[i]);
        }
        ans = max(ans, tans);
    }
    
    cout << ans << "\n";
}
 
signed main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}