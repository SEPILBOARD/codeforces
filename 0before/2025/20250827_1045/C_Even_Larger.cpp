#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
#define int long long int

int n;
int a[200'001];

void solve()
{
    cin >> n;
    for(int i = 1; i<=n; i++) cin >> a[i];

    int ans = 0;
    int psum = a[2]-a[1];
    int mxpsum = 0;
    if(psum<0){
        ans += -psum;
        psum = 0;
    }

    for(int i = 3; i<=n; i++){
        int tpsum = psum;
        if(i%2) tpsum -= a[i];
        else tpsum += a[i];

        if(tpsum<mxpsum){
            int diff = mxpsum - tpsum;
            ans += diff;

            tpsum += diff;
            if(i%2 == 0){
                psum += diff;
            }
        }
        mxpsum = max(mxpsum, psum);
        psum = tpsum;
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