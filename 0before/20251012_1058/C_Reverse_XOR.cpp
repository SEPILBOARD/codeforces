#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

ll n;

void solve()
{
    cin >> n;
    // cout << bitset<4>(n) <<"\n";

    string s = bitset<31>(n).to_string();
    s.erase(0, s.find('1'));
    // cout << s <<"\n";
    int sidx = 0;
    int eidx = s.size()-1;
    while(eidx != 0 && s[eidx] == '0')eidx--;

    while(sidx < eidx){
        if(s[sidx] != s[eidx]){
            cout << "NO\n";
            return;
        }
        sidx++;
        eidx--;
    }
    if(sidx == eidx){
        if(s[sidx] == '1'){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}
 
signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}