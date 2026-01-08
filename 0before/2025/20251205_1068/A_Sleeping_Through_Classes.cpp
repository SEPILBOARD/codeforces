#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n, k;
string s;

void solve()
{
    cin >> n >> k;
    cin >> s;

    bool flag = true;
    int cnt = 0;
    int ans = 0;
    for(int i = 0; i<n; i++){
        if(s[i] == '1'){
            flag = false;
            cnt = 0;
        }
        else{
            if(flag){
                ans++;
            }
            else{
                cnt++;
                if(cnt == k){
                    flag = true;
                }
            }
        }
    }
    cout << ans <<"\n";
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}