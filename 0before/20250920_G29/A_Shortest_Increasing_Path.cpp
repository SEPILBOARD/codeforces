#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int x, y;

void solve()
{
    cin >> x >> y;
    if(x<y){
        cout << "2\n";
    }
    else if(x == y){
        cout << "-1\n";
    }
    else{
        if(y == 1) cout << "-1\n";
        else if(x-y == 1) cout << "-1\n";
        else cout << "3\n";
    }
}
 
signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}