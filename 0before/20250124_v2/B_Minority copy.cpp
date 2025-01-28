#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
 
int t;
 
void solve()
{
    int ans = 0;
    string s; cin >> s;
    int cnt [200000][2];
    if(s[0] == '0'){
        cnt[0][0] = 1;
        cnt[0][1] = 0;
    }
    else{
        cnt[0][0] = 0;
        cnt[0][1] = 1;
    }
    for(int i = 1; i<s.size(); i++){
        if(s[0] == '0'){
            cnt[i][0] = cnt[i-1][0]+1;
            cnt[i][1] = cnt[i-1][1];
        }
        else{
            cnt[i][0] = cnt[i-1][0];
            cnt[i][1] = cnt[i-1][1]+1;
        }
        ans = max(ans, )
    }
}
 
int main()
{
    FASTIO;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}