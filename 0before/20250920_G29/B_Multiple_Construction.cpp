#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n;
int a[400'001];

void solve()
{
    cin >> n;
    for(int i = n; i>=1; i--){
        cout << i << " ";
    }
    cout << n <<" ";
    for(int i = 1; i<n; i++){
        cout << i <<" ";
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