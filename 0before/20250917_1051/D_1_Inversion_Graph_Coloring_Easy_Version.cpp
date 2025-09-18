#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;
#define MOD 1'000'000'007

ll go(int x, int y)
{
    ll res = 1;
    while(y){
        if(y&1) res *= x % MOD;
        res %= MOD;
        x *= x % MOD;
        y >>= 1;
    }
    return res;
}

int n;
int a[301];

void solve()
{
    cin >> n;
    for(int i = 0; i<n; i++) cin >> a[i];

    ll ans = (n*(n-1)/2 + n + 1)%MOD;
    
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            int cnt = 0;
            bool flag = true;
            int fmax = max(a[i], a[j]);
            int smax = min(a[i], a[j]);

            if(a[i]<= a[j]) flag = false;
            
            for(int k = j+1; k<n; k++){
                if(fmax>a[k] && smax>a[k]){
                    if(flag) continue;
                    else flag = true;
                }
                cnt++;
                if(fmax < a[k]){
                    smax = fmax;
                    fmax = a[k];
                }
                else if(smax < a[k]){
                    smax = a[k];
                }

                // cout << i <<" " <<j <<" " <<k <<"\n";
            }

            ans = (ans+cnt)%MOD;
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