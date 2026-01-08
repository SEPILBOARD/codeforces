#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

string s;

void solve()
{
    cin >> s;
    int n = s.length();

    int sidx = 0;
    int ans = 0;
    if(s[0] == 'u'){
        ans++;
        s[0] = 's';
    }
    
    for(int i = 0; i<n; i++){
        if(s[i] == 's'){
            sidx = i;
            continue;
        }

        int itv = i-sidx;
        if(i+itv > n){
            sidx = i;
            ans++;
        }
        else if(s[i+itv] != 's'){
            s[i+itv] = 's';
            ans++;
        }
    }
    cout << ans <<'\n';
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}