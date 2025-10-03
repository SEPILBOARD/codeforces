#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n, q;
int a[250'001];
int psum[250'002];
int cntbd[250'002];
vector<int> pw2;

void solve()
{
    cin >> n >> q;
    for(int i = 1; i<=n; i++){
        cin >> a[i];
        
        psum[i] = psum[i-1];
        psum[i] += max(1, (int)ceil(log2(a[i]-1)));

        cntbd[i] = cntbd[i-1];
        auto it = lower_bound(pw2.begin(), pw2.end(), a[i]);
        if(*it == a[i]) cntbd[i]++;
    }

    while(q--){
        int l, r;
        cin >> l >> r;
        int ans = psum[r] - psum[l-1];
        ans += (cntbd[r]-cntbd[l-1])/2;

        cout << ans << "\n";
    }
}
 
signed main()
{
    FASTIO;
    ll tpw2 = 1;
    while(tpw2 < 2e+9+7){
        tpw2 *= 2ll;
        pw2.push_back(tpw2+1);
    }


    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}