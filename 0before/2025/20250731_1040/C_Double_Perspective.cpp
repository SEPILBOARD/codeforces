#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

int n;
pair<int, int> v[6006];

void solve()
{
    cin >> n;
    for(int i = 1; i<=2*n; i++) v[i] = {0, 0};

    for(int i = 1; i<=n; i++){
        int a, b; cin >> a >> b;
        if(v[a].first<b) v[a] = {b, i};
    }

    vector<int> ans;
    for(int i = 1; i<=2*n; i++){
        if(v[i].first == 0) continue;
        ans.push_back(v[i].second);
    }
    cout << ans.size() <<"\n";
    for(int e: ans) cout << e <<" ";
    cout << "\n";
}
 
int main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}