#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
 
int t;
 
void solve()
{
    int n; cin >> n;
    int a[100];
    bool extad = false;
    int odcnt = 0;
    for(int i = 0; i<n; i++){
        int e; cin >> e;
        if(e%2 == 0) extad = true;
        else odcnt++;
    }
    if(extad) cout << odcnt +1 << "\n";
    else cout << odcnt -1 << "\n";
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