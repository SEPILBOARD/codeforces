#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

int n, k;
string s;
int ans[200'001];

void solve()
{
    cin >> n >> k;
    cin >> s;
    
    int mxl = 0;
    int tmxl = 0;
    for(int i = 0; i<n; i++){
        if(s[i] == '0'){
            tmxl = 0;
        }
        else{
            tmxl++;
            mxl = max(mxl, tmxl);
        }
    }

    if(mxl>=k){
        cout << "NO\n";
        return;
    }
    
    int cur = 1;
    for(int i = 0; i<n; i++){
        if(s[i] == '1') ans[i] = cur++;
    }
    for(int i = 0; i<n; i++){
        if(s[i] == '0') ans[i] = cur++;
    }

    cout << "YES\n";
    for(int i = 0; i<n; i++){
        cout << ans[i] <<" ";
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