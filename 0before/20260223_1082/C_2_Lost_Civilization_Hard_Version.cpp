#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n;
int a[300'001];

int prv[300'001];
int nxt[300'001];

ll dp[300'001];

void solve()
{
    cin >> n;
    for(int i = 1; i<=n; i++) cin >> a[i];

    vector<int> st;
    for(int i = 1; i<=n; i++){
        int tprv = 0;

        while(!st.empty() && a[st.back()] >= a[i]) st.pop_back();
        
        if(!st.empty()) tprv = st.back();

        if(tprv != 0 && a[tprv] == a[i]-1) prv[i] = tprv;
        else prv[i] = 0;

        st.push_back(i);
    }

    
    vector<vector<int>> idxs(n+1);
    for(int i = 1; i<=n; i++){
        idxs[prv[i]].push_back(i);
    }

    set<int> s;
    for(int idx: idxs[0]){
        s.insert(idx);
    }

    for(int l = 1; l<=n; l++){
        auto it = s.upper_bound(l);
        if(it == s.end()) nxt[l] = n+1;
        else nxt[l] = *it;

        for(int idx: idxs[l]){
            s.insert(idx);
        }
    }

    ll ans = 0;
    dp[n+1] = 0;
    for(int l = n; l>=1; l--){
        dp[l] = 1LL*n-l+1 + dp[nxt[l]];
        ans += dp[l];
    }

    cout << ans << "\n";
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}