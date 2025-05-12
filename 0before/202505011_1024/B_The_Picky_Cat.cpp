#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i<n; i++){
        int e; cin >> e;
        a[i] = abs(e);
    }
    int f = a[0];
    sort(a.begin(), a.end());

    int k = lower_bound(a.begin(), a.end(), f) - a.begin();
    if(k <= n/2) cout << "YES\n";
    else cout << "NO\n";

}
 
int main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}