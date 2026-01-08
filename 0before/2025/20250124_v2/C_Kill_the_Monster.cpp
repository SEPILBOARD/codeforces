#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
#define int long long int

int t;
 
void solve()
{
    int hc, dc, hm, dm, k, w, a;
    cin >> hc >> dc;
    cin >> hm >> dm;
    cin >> k >> w >> a;

    dc += k*w;

    while(k>0){
        if(hm <= (int)ceil((long double)hc/(long double)dm) * dc){
            cout << "YES\n";
            return;
        }
        hc += a;
        dc -= w;
        k--;
    }
    if(hm <= ceil(hc/(long double)dm) * dc){
        cout << "YES\n";
        return;
    }
    else cout << "NO\n";
    return;
}
 
signed main()
{
    FASTIO;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}