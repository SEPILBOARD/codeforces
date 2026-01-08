#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n, m;
pair<ll, int> a[200'005];

void solve()
{
    cin >> n >> m;
    for(int i = 0; i<n; i++){
        cin >> a[i].first;
        a[i].second = i+1;
    }

    sort(a, a+n);

    if(n < 2*m){
        cout << -1 << "\n";
        return;
    }
    
    if(m == 0){
        if(n == 2){
            cout << -1 << "\n";
            return;
        }

        ll rm = 0;
        for(int i = 0; i<n-1; i++) rm += a[i].first;

        if(rm < a[n-1].first){
            cout << "-1\n";
            return;
        }

        ll cur = 0;
        int sidx = -1;
        for(int i = 0; i<n-1; i++){
            cur += a[i].first;
            if(cur >= a[n-1].first) {
                sidx = i;
                break;
            }
        }

        cout << n - 1 << "\n";

        for(int i = sidx; i<n-2; i++){
            cout << a[i].second << " " << a[i+1].second << "\n";
        }

        for(int i = 0; i<sidx; i++){
            cout << a[i].second << " " << a[n-1].second << "\n";
        }

        cout << a[n-2].second << " " << a[n-1].second << "\n";
        return;
    }
    

    cout << n - m << "\n";
    for(int i = 0; i < n-2*m; i++){
        cout << a[i].second << " " << a[i + 1].second << "\n";
    }
    for(int i = 0; i < m; i++){
        int sidx = n - m + i;
        int eidx = n - 2 * m + i;
        cout << a[sidx].second << " " << a[eidx].second << "\n";
    }
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}