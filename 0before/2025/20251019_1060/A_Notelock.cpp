#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n, k;
string s;

void solve()
{
    cin >> n >> k;
    cin >> s;
    
    int ans = 0;
    for(int i = 0; i<n; i++){
        if(s[i] == '0') continue;
        
        bool flag = false;
        for(int j = max(0, i-k+1); j<=i-1; j++){
            if(s[j] == '1'){
                // cout << i <<": " <<j <<"\n";
                flag = true;
                break;
            }
        }

        if(!flag){
            ans++;
        }
        
    }
    cout << ans <<"\n";
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}