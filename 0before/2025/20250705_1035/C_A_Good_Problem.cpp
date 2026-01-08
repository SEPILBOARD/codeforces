#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
#define int long long int

int n, l, r, k;

void solve()
{
    cin >> n >> l >> r >> k;

    
    if(n%2){
        cout << l << "\n";
        return;
    }
    
    if(n == 2){
        cout << "-1\n";
        return;
    }

    int last2 = 1ll<<(64-__builtin_clzll(l-1));
    if(last2 == l) last2 *= 2;
    
    if(last2>r) cout << "-1\n";
    else if(k<=n-2) cout << l <<"\n";
    else cout << last2 <<"\n";
}
 
signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}