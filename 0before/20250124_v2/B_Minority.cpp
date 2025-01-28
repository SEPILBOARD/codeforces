#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
 
int t;
 
void solve()
{
    string s; cin >> s;
    int cnt = 0;
    int len = s.size();
    for(int i = 0; i<s.size(); i++){
        if(s[i] == '0') cnt++;
    }
    if(len-cnt == cnt){
        cout << cnt-1 <<"\n";
    }
    else cout << min(len-cnt, cnt) << "\n";
    return;
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