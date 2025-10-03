#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n, q;
int a[250'002];
int cnt0[250'002];
int cnt1[250'002];
int cntDu[250'002];

void solve()
{
    cin >> n >> q;
    a[0] = -1;
    cntDu[0] = 0;
    for(int i = 1; i<=n; i++){
        cin >> a[i];
        
        cnt0[i] = cnt0[i-1];
        cnt1[i] = cnt1[i-1];
        if(a[i] == 1) cnt1[i]++;
        else cnt0[i]++;

        cntDu[i] = cntDu[i-1];
        if(a[i] == a[i-1]) cntDu[i]++;
    }

    while(q--){
        int l, r;
        cin >> l >> r;

        if((cnt0[r]-cnt0[l-1])%3 || (cnt1[r]-cnt1[l-1])%3){
            cout << "-1\n";
            continue;
        }

        int ans = (r-l+1)/3;
        if(cntDu[r] - cntDu[l] == 0) ans++;
        // cout << cntDu[r] - cntDu[l-1] <<"\n";
        cout << ans <<"\n";
    }

    // for(int i = 0; i<=n; i++){
    //     cout << cntDu[i] <<" ";
    // }
}
 
signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}