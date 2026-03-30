#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

string s;
string t;
int cnt[26];

void solve()
{
    memset(cnt, 0, sizeof cnt);
    
    cin >> s >> t;
    
    for(char c: s){
        cnt[c-'a']++;
    }

    string ans = "";
    for(char c: t){
        if(cnt[c-'a']){
            cnt[c-'a']--;
        }
        else{
            ans.push_back(c);
        }
    }

    for(int i = 0; i<26; i++){
        if(cnt[i]){
            cout << "Impossible\n";
            return;
        }
    }

    sort(ans.begin(), ans.end());
    int idx = upper_bound(ans.begin(), ans.end(), s[0])-ans.begin();
    for(int i = 0; i<idx; i++) cout << ans[i];
    for(int i = idx; i<ans.size(); i++) cout << ans[i];
    cout << "\n";
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}