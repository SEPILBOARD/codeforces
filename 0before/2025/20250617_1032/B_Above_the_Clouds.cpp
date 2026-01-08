#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

int n;
string s;
int cnt[28];

void solve()
{
    memset(cnt, 0, sizeof(cnt));
    cin >> n;
    cin >> s;

    for(int i=1; i<n-1; i++){
        cnt[s[i]-'a']++;
    }
    
    for(int i = 1; i<n-1; i++){
        if(cnt[s[i]-'a']>=2 || s[i] == s[0] || s[i] == s[n-1]){
            cout << "Yes\n";
            return;
        }
    }
    cout << "No\n";
}
 
int main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}