#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
 
void solve()
{
    int x, y; cin >> x >> y;
    x++;
    while(x>0){
        if(x==y){
            cout << "Yes\n";
            return;
        }
        x -= 9;
    }

    cout << "No\n";
    return;
}
 
int main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}