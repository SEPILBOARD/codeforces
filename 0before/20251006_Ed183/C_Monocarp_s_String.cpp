#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n;
string s;
map<int, int> idx;

void solve()
{
    idx.clear();
    cin >> n;
    cin >> s;

    int ans = 1e+9;

    int tot = 0;
    for(int i = 0; i<n; i++){
        if(s[i] == 'a') tot+=1;
        else tot-=1;
    }
    if(tot == 0){
        cout << "0\n";
        return;
    }

    idx[0] = 0;
    int psum = 0;
    for(int i = 0; i<n; i++){
        if(s[i] == 'a') psum+=1;
        else psum-=1;

        if(idx.count(psum-tot)){
            ans = min(ans, i-idx[psum-tot]+1);
        }
        idx[psum] = i+1;
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