#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n, k;
int a[200'001];
map<int, int> mp;


void solve()
{
    vector<int> ans;
    mp.clear();

    cin >> n >> k;
    for(int i = 0; i<n; i++){
        cin >> a[i];
        if(mp.count(a[i]) == 0) mp[a[i]] = 1;
    }

    sort(a, a+n);

    for(int i = 0; i<n; i++){
        if(mp[a[i]]>1) continue;

        for(int cur = a[i]; cur<=k; cur+=a[i]){
            if(mp.count(cur) == 0){
                cout << "-1\n";
                return;
            }

            mp[cur]++;
        }
        ans.push_back(a[i]);
    }
    
    cout << ans.size() <<'\n';
    for(int e: ans) cout << e << ' ';
    cout << '\n';
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}