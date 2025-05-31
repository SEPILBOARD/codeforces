#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
#define int long long int
#define MOD 998244353

int n;
int p[100'001];
int q[100'001];
int ans[100'001];
int pt[100'001];

void solve()
{
    cin >> n;
    for(int i = 1; i<=n; i++) cin >> p[i];
    for(int i = 1; i<=n; i++) cin >> q[i];

    int pidx = 1;
    int qidx = 1;
    
    for(int i = 1; i<=n; i++){
        if(p[i] > p[pidx]) pidx = i;
        if(q[i] > q[qidx]) qidx = i;

        if(p[pidx] > q[qidx]){
            ans[i] = (pt[p[pidx]] + pt[q[i+1-pidx]])%MOD;
        }
        else if(p[pidx] < q[qidx]){
            ans[i] = (pt[p[i+1-qidx]] + pt[q[qidx]])%MOD;
        }
        else if(p[i+1-qidx] < q[i+1-pidx]){
            ans[i] = (pt[p[pidx]] + pt[q[i+1-pidx]])%MOD;
        }
        else{
            ans[i] = (pt[p[i+1-qidx]] + pt[q[qidx]])%MOD;
        }
    }

    for(int i = 1; i<=n; i++){
        cout << ans[i] <<" ";
    }
    cout << "\n";
}
 
signed main()
{
    FASTIO;
    pt[0] =1;
    for(int i = 1; i<= 100'001; i++){
        pt[i] = pt[i-1]*2%MOD;
    }

    int t; cin >> t;
    while (t--) solve();
    return 0;
}