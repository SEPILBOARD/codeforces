#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n;
bool v[1'001];

void solve()
{
    int cnt = 0;
    cin >> n;
    vector<int> a(n);
    memset(v, false, sizeof v);
    for(int i = 0; i<n; i++){
        cin >> a[i];
        
        if(!v[a[i]]) cnt++;
        v[a[i]] = true;
        
    }
    sort(a.begin(), a.end());
    
    cout << *lower_bound(a.begin(), a.end(), cnt) <<"\n";
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}