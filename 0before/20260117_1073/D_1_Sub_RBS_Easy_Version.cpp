#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n;
string s;
vector<pair<int, int>> cnt;

void solve()
{
    cnt.clear();

    cin >> n;
    cin >> s;
   

    bool dcr = true;
    int cur = 0;

    for(int i = 0; i<n; i++){
        if(s[i] == '('){
            if(dcr){
                dcr = false;
                if(!cnt.empty())cnt.back().second = cur;
                cnt.push_back({cur+1, cur});
            }
            else{
                cnt.back().first++;
            }
            cur++;
        }
        else{
            dcr = true;
            cur--;
        }
    }

    int mn = cnt[0].first-cnt[0].second;
    bool flag = false;
    for(int i = 1; i<cnt.size(); i++){
        if(cnt[i-1].first<cnt[i].first){
            flag = true;
            mn = min(mn, cnt[i-1].first-cnt[i-1].second);
        }
    }

    if(flag){
        cout << n-2*mn <<"\n";
    }else{
        cout << "-1\n";
    }
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}