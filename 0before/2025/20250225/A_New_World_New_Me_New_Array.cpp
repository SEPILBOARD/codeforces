#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

void solve()
{
    int n, k, p;
    cin >> n >> k >> p;
    int tk = abs(k);
    int temp = (tk+p-1)/p;
    if(temp > n){
        cout << "-1\n"; return;
    }
    else{
        cout << temp <<"\n";
        return;
    }

}
 
int main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}