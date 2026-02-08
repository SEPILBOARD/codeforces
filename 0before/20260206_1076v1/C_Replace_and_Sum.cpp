#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n, q;
int a[200'001];
int b[200'001];

void solve()
{
    cin >> n >> q;
    for(int i = 1; i<=n; i++) cin >> a[i];
    for(int i = 1; i<=n; i++) cin >> b[i];

    vector<ll> psum(n+1, 0ll);

    a[n] = max(a[n], b[n]);
    for(int i = n-1; i>0; i--){
        a[i] = max(a[i], max(a[i+1], b[i]));
    }
    
    for(int i = 1; i<=n; i++){
        psum[i] = psum[i-1] + a[i];
    }

    for(int i = 0; i<q; i++){
        int l, r;
        cin >> l >> r;
        cout << psum[r]-psum[l-1] <<" ";
    }
    cout << "\n";

}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}