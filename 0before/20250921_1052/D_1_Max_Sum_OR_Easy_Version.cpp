#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int l, r;
int n;

int a[200'001];
bool v[200'001];

void solve()
{
    cin >> l >> r;
    n = r-l+1;

    for(int k = 29; k >= 0; k--){
        int len = 1<<(k+1);
        int mid = len/2;

        int sval = (l/len) * len;
        while(sval <= r){
            int rl = sval + mid;
            int rr = sval + (2*mid-1);
            int s = max(rl, l);
            int e = min(rr, r);
            for(int rval = s; rval <= e; rval++){
                ll lval = 2ll * sval + (2*mid-1) - rval;
                int ridx = rval-l;
                int lidx = lval-l;
                
                if(lval < l || lval > r) continue;
                if(v[ridx] || v[lidx]) continue;

                a[ridx] = l+lidx;
                a[lidx] = l+ridx;
                v[ridx] = true;
                v[lidx] = true;
            }
            sval += len;
        }
    }

    for(int i = 0; i<n; i++){
        if(!v[i]){
            a[i] = l+i;
        }
    }

    ll ans = 0;
    for(int i = 0; i<n; i++){
        ans += ((l + i)|a[i]);
    }

    cout << ans << "\n";
    for(int i = 0; i<n; i++){
        cout << a[i] << " ";
    }
    cout << "\n";

    memset(v, false, sizeof(bool)*(n+1));
}
 
signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}