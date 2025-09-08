#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long int ll;

ll pw2[62];
ll k, x;

void solve()
{
    vector<int> ans;
    cin >> k >> x;
    while(x != pw2[k]){
        if(x < pw2[k]){
            ans.push_back(1);
            x *= 2ll;
        }
        else{
            ans.push_back(2);
            x = 2ll*x-pw2[k+1];
        }
    }
    
    reverse(ans.begin(), ans.end());
    cout << ans.size() <<"\n";
    for(int e: ans) cout << e <<" ";
    cout << "\n";
}
 
signed main()
{
    FASTIO;
    pw2[0] = 1ll;
    for(int i = 0; i<=60; i++){
        pw2[i+1] = pw2[i]*2ll;
    }

    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}