#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
 
int T;
 
void solve()
{
    int n, k; cin >> n >> k;
    string s; cin >> s;
    string t; cin >> t;
    int scnt[26];
    int tcnt[26];
    memset(scnt,0,sizeof(scnt));
    memset(tcnt,0,sizeof(tcnt));
    for(int i = 0; i<n; i++){
        scnt[s[i]-'a']++;
        tcnt[t[i]-'a']++;
    }
    
    vector<int> ck;
    for(int i = 0; i<26; i++){
        if(scnt[i] != tcnt[i]){
            cout << "NO\n";
            return;
        }
        if(scnt[i] <= k){
            ck.push_back(i);
        }
    }
    
    // for(int i = 0; i<n; i++){
    //     if(scnt[s[i]-'a'] > 3) continue;
    // }
    cout << "YES\n";
    return;
}
 
int main()
{
    FASTIO;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}