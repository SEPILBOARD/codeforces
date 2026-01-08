#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

long double a[200];

void solve()
{
    string s;
    cin >> s;
    int ans = 0;
    int idx = s.size()-1;
    while(s[idx] == '0'){
        ans++;
        idx--;
    }
    // cout << ans <<"\n";
    for(int i = idx; i>0; i--){
        if(s[i] != '0') ans++;
    }
    cout << ans <<"\n";
}
 
int main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}