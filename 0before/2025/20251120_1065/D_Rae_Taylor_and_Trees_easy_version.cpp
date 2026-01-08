#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n, x;
int a[200'002];
int pmn[200'020];
int smx[200'020];

void solve()
{

    cin >> n;
    pmn[0] = 1e+9;
    smx[n+1] = 0;
    for(int i = 1; i<=n; i++) cin >> a[i];
    for(int i = 1; i<=n; i++) pmn[i] = min(pmn[i-1], a[i]);
    for(int i = n; i>0; i--) smx[i] = max(smx[i+1], a[i]);
    
    for(int i = 1; i<n; i++){
        if(pmn[i]>smx[i+1]){
            cout << "No\n";
            return;
        }
    }
    cout << "Yes\n";
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}