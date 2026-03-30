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
    int idx = lower_bound(ans.begin(), ans.end(), s[0])-ans.begin();
    
    for(int i = 0; i<idx; i++) cout << ans[i];

    queue<char> sq;
    queue<char> tq;

    for(int i = 0; i<s.length(); i++) sq.push(s[i]);
    for(int i = idx; i<ans.size(); i++) tq.push(ans[i]);

    while(!sq.empty() || !tq.empty()){
        if(sq.empty()){
            cout << tq.front();
            tq.pop();
            continue;
        }
        if(tq.empty()){
            cout << sq.front();
            sq.pop();
            continue;
        }

        if(sq.front()>tq.front()){
            cout << tq.front();
            tq.pop();
        }
        else{
            cout << sq.front();
            sq.pop();
        }
    }
    
    cout << "\n";

    // cout << sq.size() <<", " << tq.size() <<"\n";

}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}