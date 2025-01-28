#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

int t;

void solve()
{
    int a[1000000001] = {0};
    int cnt = 0;
    int maxi = 1;
    vector<int> cntv;
    int n, k; cin >> n >> k;
    for(int i = 0; i<n; i++){
        int e; cin >> e;
        maxi = max(maxi, e);
        if(a[e] == 0) cnt++;
        a[e]++;
    }
    for(int i = 1; i<=maxi; i++){
        if(a[i] == 0) continue;
        cntv.push_back(a[i]);
    }
    sort(cntv.begin(), cntv.end());
    int ans = 0;
    int usek = 0;
    for(int e: cntv){
        usek += e;
        if(usek > k) break;
        ans ++;
    }
    cout << max(cnt - ans, 1) <<"\n";
    cntv.clear();
}

int main()
{
    FASTIO;
    
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}