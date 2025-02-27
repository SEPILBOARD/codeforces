#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
int k;

void solve()
{
    cin >> k;
    int x =0, y = 0;
    int cnt = 0;
    cout << k+1 <<"\n";
    while(cnt != k+1){
        cout << x << " " <<y <<"\n";
        if(x == y) y++;
        else x++;
        cnt++;
    }
}
 
int main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}