#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
 
int t;
 
void solve()
{
    int n, k; cin >> n >> k;
    int cnt [26][2];
    memset(cnt, 0, sizeof(cnt));
    string s, t; cin >> s >> t;
    for(int i = 0; i<n; i++){
        cnt[s[i]-'a'][0] ++;
        cnt[t[i]-'a'][1] ++;
    }
    for(int i = 0; i<26; i++){
        if(cnt[i][0] != cnt[i][1]){
            cout << "NO\n";
            return;
        }
    }
    
    int l = min(k,n);
    int r = max(-1,n-k-1);
    if(r>=l){
        cout << " YES\n";
        return;
    }
    for(int i = r+1; i<l; i++){
        if(s[i] != t[i]){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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