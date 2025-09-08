#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

int a, b;

void solve()
{
    cin >> a >> b;
    if(a == b){
        cout << "0\n";
    }
    else if(a%b == 0 || b%a == 0){
        cout << "1\n";
    }
    else{
        cout << "2\n";
    }
}
 
signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}