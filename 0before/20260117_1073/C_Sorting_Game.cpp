#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n;
string s;
vector<int> ot;
vector<pair<int, int>> ans;

void solve()
{
    ot.clear();
    ans.clear();

    cin >> n;
    cin >> s;
    
    int idx = 0;
    char prv = s[0];
    while(idx<n && prv == s[idx]) idx++;
    
    ans.push_back({1, idx});

    if(idx == n){
        cout << "Bob\n";
        return;
    }

    while(idx<n){
        prv = s[idx];
        int sidx = idx+1;
        while(idx<n && prv == s[idx]) idx++;
        ans.push_back({sidx, idx});
    }

    if(s[0] == '1'){
        if((int)ans.size()%4 < 2) cout << "Bob\n";
        else{
            cout << "Alice\n";
            for(int i = ans[0].first; i<=ans[0].second; i++) ot.push_back(i);
            for(int i = ans[1].first; i<=ans[1].second; i++) ot.push_back(i);
            cout << ot.size() <<"\n";
            for(int e: ot) cout << e <<" ";
            cout << "\n";
        }
    }
    else{
        if(((int)ans.size()-1)%4 == 1 || ((int)ans.size()-1)%4 == 2) cout << "Bob\n";
        else{
            cout << "Alice\n";
            for(int i = ans[0].first; i<=ans[0].second; i++) ot.push_back(i);
            for(int i = ans[1].first; i<=ans[1].second; i++) ot.push_back(i);
            cout << ot.size() <<"\n";
            for(int e: ot) cout << e <<" ";
            cout << "\n";
        }
    }
    // cout <<"--\n";
    // for(auto[s, e]: ans){
    //     cout << s <<" " << e <<"\n";
    // }
    // cout << (int)ans.size() <<"\n";
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}