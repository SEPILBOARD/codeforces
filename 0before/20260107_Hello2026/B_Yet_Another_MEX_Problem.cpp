#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n, k;

void solve()
{
    cin >> n >> k;
    vector<int> cnt(n+1, 0);

    for(int i = 0; i<n; i++){
        int a; cin >> a;
        cnt[a]++;
    }

    int rmv = n-k+1;
    for(int i = 0; i<=n; i++){
        int use = min(rmv, max(cnt[i]-1, 0));
        rmv -= use;
        cnt[i] -= use;

        if(rmv == 0) break;
    }
    
    if(rmv != 0){
        for(int i = n; i>=0; i--){
            int use = min(rmv, cnt[i]);
            rmv -= use;
            cnt[i] -= use;

            if(rmv == 0) break;
        }
    }

    for(int i = 0; i<=n; i++){
        if(cnt[i] == 0){
            cout << i <<'\n';
            break;
        }
    }
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}