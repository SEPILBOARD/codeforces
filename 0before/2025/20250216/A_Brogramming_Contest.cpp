#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

void solve()
{
    int n; cin >> n;
    string s; cin >> s;
    char bf = s[0];
    int ans = 1;
    for(int i = 1; i<n; i++){
        if(bf != s[i]){
            ans++;
            bf = s[i];
        }
    }
    if(s[0] == '0') ans --;
    cout << ans <<"\n";
}
 
int main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}