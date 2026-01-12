#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

ll pw2[35];
ll comb[35][35];
ll combPsum[36][36];

int n, k;

void solve()
{
    ll ans = 0ll;

    cin >> n >> k;
    int mxb = 0;
    while(n != 1){
        mxb++;
        n/=2;
    }
    for(int i = 0; i<mxb; i++){
        int cnt = k-(i+1);

        if(cnt<0){
            ans += pw2[i];
            continue;
        }

        if(cnt>=i){
            continue;
        }

        for(int j = i; j>cnt; j--){
            ans += comb[i][j];
        }
    }

    if(mxb+1 > k) ans+=1LL;
    cout << ans <<"\n";
    
    
}

signed main()
{
    FASTIO;

    comb[0][0] = 1;
    for(int i = 1; i<= 34; i++){
        for(int j = 0; j<=i; j++){
            if(j==0 || j==i) comb[i][j] = 1;
            else comb[i][j] = comb[i-1][j-1]+comb[i-1][j];
        }
    }

    pw2[0] = 1;
    for(int i = 0; i<=33; i++){
        pw2[i+1] = pw2[i]*2LL;
    }

    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}