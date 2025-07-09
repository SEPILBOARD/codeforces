#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

int n;
int a[101];
int b[101];

void solve()
{
    cin >> n;
    for(int i = 0; i<n; i++){
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b+n);

    vector<int> ans;
    for(int i = 0; i<n; i++){
        if(a[i] == b[i]) continue;
        ans.push_back(a[i]);
    }
    if(ans.size() == 0) cout << "NO\n";
    else{
        cout << "YES\n";
        cout << ans.size() <<"\n";
        for(int e: ans) cout << e <<" ";
        cout <<"\n";
    }
}
 
int main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}