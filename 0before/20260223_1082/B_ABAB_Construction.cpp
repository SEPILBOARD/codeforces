#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n;
// char t[200'001];

void solve()
{
    cin >> n;
    string t;
    cin >> t;

    bool dp[2] = {true, false};

    for(int i = 0; i<n; i++){
        int len = n - i;
        bool ndp[2] = {false, false};

        for(int p = 0; p<2; p++){
            if (!dp[p]) continue;

            char c = ((p == 0) ? 'a' : 'b');

            if(t[i] == '?' || t[i] == c) {
                ndp[p^1] = true;
            }

            if(len%2 == 0){
                if(c == 'a') c = 'b';
                else c = 'a';
            }
            if(t[i] == '?' || t[i] == c){
                ndp[p] = true;
            }
        }

        dp[0] = ndp[0];
        dp[1] = ndp[1];
    }

    cout << ((dp[0] || dp[1]) ? "YES\n" : "NO\n");
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}