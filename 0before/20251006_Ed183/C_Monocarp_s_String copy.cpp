#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n;
string s;
int idx[1'000'011];

void solve()
{
    cin >> n;
    cin >> s;

    int ans = 1e+9;
    memset(idx, -1, sizeof(int)*(5*n+10));

    int tot = 0;
    for(int i = 0; i<n; i++){
        if(s[i] == 'a') tot+=1;
        else tot-=1;
    }
    if(tot == 0){
        cout << "0\n";
        return;
    }

    int base = 2*n+5;
    idx[base] = 0;
    int psum = 0;
    for(int i = 0; i<n; i++){
        if(s[i] == 'a') psum+=1;
        else psum-=1;

        if(idx[base+psum-tot] != -1){
            ans = min(ans, i-idx[base+psum-tot]+1);
        }
        if(idx[base+psum] == -1) idx[base+psum] = i+1;
    }
    
    if(ans == 1e+9 || ans == n) cout << "-1\n";
    else cout << ans <<"\n";
}
 
signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}