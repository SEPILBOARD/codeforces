#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n, m, k;

void solve()
{
    cin >> n >> m >> k;

    if(k == 1 || k == n){
        ll lo = 0, hi = n;
        while(lo+1<hi){
            int mid = lo+hi>>1;
            if(1+(mid-1)*2 <= m) lo = mid;
            else hi = mid;
        }
        cout << lo+1 <<"\n";
        return;
    }

    ll lo = 0, hi = n;
    while(lo+1<hi){
        int mid = lo+hi>>1;

        // cout << mid <<"!\n";

        bool flag = false;

        for(int l = 0; l<=min(mid, k-1); l++){
            int r = min(mid-l, n-k);
            if(r+l != mid) continue;

            // int cl = min(l, r);
            // int cr = max(l, r);


            int d = max(0, 1+(l-1)*2) + max(0 ,1+(r-1)*2-min(max(0, l-1), r-1));
            if(d<=m){
                // cout << mid <<": " << l <<", " << r <<": " << 1+(r-1)*2-min(l, r-1) <<"\n";
                flag = true;
                break;
            }
        }
        if(flag) lo = mid;
        else hi = mid;
    }
    cout << lo+1 <<"\n";
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}