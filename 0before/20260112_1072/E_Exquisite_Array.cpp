#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n;
int a[100'001];
int itv[100'001];
ll idx[100'001];

int ans[100'001];

void solve()
{
    cin >> n;
    memset(idx, 0, sizeof(int)*(n+1));
    memset(ans, 0, sizeof(ll)*(n+1));
    for(int i = 0; i<n; i++) cin >> a[i];
    for(int i = 1; i<n; i++){
        itv[i] = abs(a[i]-a[i-1]);
    }

    for(int i = 1; i<n; i++){
        
    }
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}