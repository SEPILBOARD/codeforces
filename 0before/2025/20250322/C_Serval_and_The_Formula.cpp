#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
#define int long long int

void solve()
{
    int x, y;
    cin >> x >> y;
    stack<int> s;
    if(x ==y ){
        cout << "-1\n";
        return;
    }
    int k = 0;
    int idx = 1;
    bool flag = false;
    while(x>10 || y >10){
        int x1 = x%10;
        int y1 = y%10;
    }
}
 
signed main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}