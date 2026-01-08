#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

int n;
bool v[200'001];
int a[200'001];

void solve()
{
    cin >> n;

    int zcnt = 0;
    int zidx = 0;
    for(int i = 1; i<=n; i++){
        cin >> a[i];
        v[a[i]] = true;
        if(a[i] == 0){
            zcnt++;
            zidx = i;
        }
    }

    if(zcnt == 1){
        int value = 0;
        for(int i = 1; i<=n; i++){
            if(v[i]) continue;
            value = i;
            break;
        }
        a[zidx] = value;
    }

    int ans = 0;
    int idx = 1;
    for(int i = 1; i<=n; i++){
        if(a[i] == i) idx++;
        else break;
    }

    bool flag = true;
    for(int i = idx+1; i<=n; i++){
        if(!flag && a[i] != i) flag = true;
        if(flag && a[i] == i){
            ans = max(ans, i-idx);
            flag = false;
        }
    }
    // cout << idx;
    if(a[n] != n) ans = max(ans, n+1-idx);
    

    cout << ans <<"\n";

    memset(v, false, sizeof(bool)*(n+1));
}
 
signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}