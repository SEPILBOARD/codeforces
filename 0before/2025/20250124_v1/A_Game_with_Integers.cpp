#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
 
int t;
 
void solve()
{
    int n; cin >> n;
    if((n-1)%3 == 0 || (n+1)%3 ==0){
        cout << "First\n";
    }
    else{
        cout << "Second\n";
    }
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