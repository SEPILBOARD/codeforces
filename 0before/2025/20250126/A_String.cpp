#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
 
int t;
 
void solve()
{
    string s; cin >> s;
    int ans = 0;
    for(int i = 0; i<s.size(); i++){
        if(s[i] == '1') ans ++;
    }
    cout << ans <<"\n";
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