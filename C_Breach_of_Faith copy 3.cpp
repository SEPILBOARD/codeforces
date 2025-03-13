#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
#define int long long int

int n;
int b[400001];

void solve()
{
    int ls = 0;
    int ss = 0;
    cin >> n;
    for(int i = 1; i<=2*n; i++){
        cin >> b[i];
    }
    sort(b+1, b+(2*n+1));
    for(int i = 1; i<=n; i++) ss += b[i];
    for(int i = n+1; i<=2*n; i++) ls += b[i];
    cout << ls-ss <<" ";
    for(int i = 1; i<=n; i++){
        cout << b[n+i] <<" " << b[i] << " ";
    }
    cout << "\n";
}
 
signed main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}