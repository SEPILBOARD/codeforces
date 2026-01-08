#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
#define int long long int

int n, m, k;

void solve()
{
    cin >> n >> m >> k;

    int lo = 0, hi = m;
    while(lo+1 < hi){
        int mid = lo+hi >> 1;
        int onel = m/(mid+1);
        int add = m%(mid+1);
        int total = (mid*onel +min(mid, add))*n;
        // cout << mid <<": " << total <<"\n";
        if(total >=k) hi = mid;
        else lo = mid;
    }
    cout << hi <<"\n";
}
 
signed main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}