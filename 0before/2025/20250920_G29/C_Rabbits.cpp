#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n;

void solve()
{
    cin >> n;
    vector<char> s(n+3);
    vector<bool> fxd(n+3);

    s[0] = '0';
    for(int i = 1; i<=n; i++){
        cin >> s[i];
    }
    s[n+1] = '0';

    bool flag = true;
    for(int i = 1; i<=n; i++){
        if(fxd[i] || s[i] == '1') continue;
        if(s[i] == '0'){
            if(s[i-1] == '0' || s[i+1] == '0') continue;
            
            if(i-1 != 1 && s[i-2] == '0' && !fxd[i-2]){
                // fxd[i] = true;
                continue;
            }
            if(i+1 != n && s[i+2] == '0'){
                fxd[i+2] = true;
                continue;
            }
        }
        flag = false;
        break;
    }

    if(flag) cout << "YES\n";
    else cout << "NO\n";

    // memset(v, false, sizeof(bool)&(n+2));
    // memset(s, 0, sizeof(char)&(n+2));
}
 
signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}