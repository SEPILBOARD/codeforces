#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

int n;
int psum[42];

void solve()
{
    cin >> n;
    psum[0] = 0;
    for(int i = 1; i<=n; i++){
        int a; cin >> a;
        psum[i] = psum[i-1]+a;
    }

    for(int l = 1; l<=n-2; l++){
        for(int r = l+1; r<=n-1; r++){
            int psum1 = psum[l]%3;
            int psum2 = (psum[r]-psum[l])%3;
            int psum3 = (psum[n]-psum[r])%3;
            // cout << psum1 <<" " << psum2 <<" " << psum3 <<"\n";

            if(psum1 == psum2 && psum1 == psum3){
                cout << l << " " <<r <<"\n";
                return;
            }
            if(psum1 != psum2 && psum1 != psum3 && psum2 != psum3){
                cout << l << " " <<r <<"\n";
                return;
            }
        }
    }
    cout << "0 0\n";
}
 
signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}