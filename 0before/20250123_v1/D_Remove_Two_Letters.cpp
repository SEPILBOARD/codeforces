#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
 
int t;
 
void solve()
{
    int n; cin >> n;
    string s; cin >> s;
    char bf = s[0];
    int ans = n-1;

    for(int i = 0; i<n-2; i++){
        if(s[i] == s[i+2]) ans --;
    }
    cout << ans << "\n";
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