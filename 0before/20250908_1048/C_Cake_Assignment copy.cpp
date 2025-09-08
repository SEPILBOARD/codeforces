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

    // if(x == pw2[k]){
    //     cout << "0\n\n";
    //     return;
    // }
    if(x > pw2[k]){
        int cur = k;

        for(int i = k-1; i>=0; i--){
            if(x&(pw2[i])){
                for(int j = cur; j>i+1; j--){
                    ans.push_back(1);
                }
                ans.push_back(2);
                cur = i;
            }
        }
    }
    else if(x < pw2[k]){
        x = pw2[k+1]-x;
        int cur = k;

        for(int i = k-1; i>=0; i--){
            if(x&(pw2[i])){
                for(int j = cur; j>i+1; j--){
                    ans.push_back(2);
                }
                ans.push_back(1);
                cur = i;
            }
        }
    }

    cout << ans.size() <<"\n";
    for(int e: ans) cout << e << " ";
    cout << "\n";
}
 
signed main()
{
    FASTIO;
    pw2[0] = 1ll;
    for(int i = 0; i<=60; i++){
        pw2[i+1] = pw2[i]*2ll;
    }
    // cout << pw2[60] <<"\n";
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}