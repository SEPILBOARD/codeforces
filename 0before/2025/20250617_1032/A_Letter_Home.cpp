#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

int n, s;
int x[11];

void solve()
{
    cin >> n >> s;
    for(int i = 0; i<n; i++) cin >> x[i];
    if(n==1){
        cout << abs(s-x[0]) <<"\n";
        return;
    }
    sort(x, x+n);
    if(x[n-1] <= s) cout << s-x[0] <<"\n";
    else if(x[0]>=s) cout << x[n-1]-s <<"\n";
    else cout << x[n-1]-x[0] + min(x[n-1]-s, s-x[0]) <<"\n";
}
 
int main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}