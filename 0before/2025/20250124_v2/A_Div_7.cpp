#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
 
int t;
 
void solve()
{
    int n; cin >> n;
    if(n%7 == 0){
        cout << n << "\n";
        return;
    }
    n = n/10 * 10;
    while(n%7!=0){
        n++;
    }
    cout << n <<"\n";
    return;
}
 
int main()
{
    FASTIO;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}