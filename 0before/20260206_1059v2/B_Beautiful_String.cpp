#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n;
string s;

void solve()
{
    vector<int> ans;

    cin >> n;
    cin >> s;
    for(int i = 0; i<n; i++){
        if(s[i] == '0') ans.push_back(i+1);
    }

    cout << ans.size() <<"\n";
    for(int e: ans) cout << e <<" ";
    cout << "\n";
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}