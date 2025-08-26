#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

int n, a, b;

void solve()
{
    cin >> n >> a >> b;
    if(b%2 == n%2){
        if(a>b){
            if(a%2 == n%2) cout << "YES\n";
            else cout << "NO\n";
        }
        else cout << "YES\n";
    }
    else cout << "NO\n"; 
}
 
signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}