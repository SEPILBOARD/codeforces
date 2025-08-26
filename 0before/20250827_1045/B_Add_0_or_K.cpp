#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
#define int long long int

int n, k;
int a[100'001];

void solve()
{
    cin >> n >> k;
    for(int i = 0; i<n; i++) cin >> a[i];
    
    if(n == 1){
        cout << a[0] + k <<"\n";
        return;
    }

    if(k%2){
        for(int i = 0; i<n; i++){
            if(a[i]%2) cout << a[i]+k <<" ";
            else cout << a[i] <<" ";
        }
        cout << "\n";
    }
    else{
        for(int t = 3; t<=101; t++){
            if(__gcd(k, t) != 1) continue;
            for(int i = 0; i<n; i++){
                for(int j = 0; j<t; j++){
                    if((a[i]+j*k)%t) continue;
                    cout << a[i]+j*k <<" ";
                    break;
                }
            }
            cout << "\n";
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