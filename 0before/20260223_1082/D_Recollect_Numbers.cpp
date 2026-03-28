#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n, k;

void solve()
{
    cin >> n >> k;
    if(k<n || 2*n<k){
        cout << "NO\n";
        return;
    }
    
    cout << "YES\n";
    for(int c = 0; c<2; c++){
        for(int i = 1; i<=n; i++){
            cout << i <<" ";
        }
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