#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

int n;
int a[111];

void solve()
{
    cin >> n;
    for(int i = 1; i<=n; i++){
        cin >> a[i];
    }

    int lo = 1, hi = n;
    int cur = 1;
    while(lo<hi){
        if(cur == a[lo]) lo++;
        else if(cur == a[hi]) hi--;
        else{
            cout << "NO\n";
            return;
        }
        cur++;
    }
    cout << "YES\n";
}
 
signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}