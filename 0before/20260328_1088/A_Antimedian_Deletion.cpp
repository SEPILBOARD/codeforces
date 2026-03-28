#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n;
int p[101];

void solve()
{
    cin >> n;
    for(int i = 0; i<n; i++) cin >> p[i];
    
    if(n <= 2){
        for(int i = 1; i<=n; i++) cout << n <<" ";
        cout << "\n";
        return;
    }

    for(int i = 0; i<n; i++){
        cout << 2 <<" ";
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