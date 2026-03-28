#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int x, y;

void solve()
{
    cin >> x >> y;

    int n = abs(x-y);
    int ans = 0;
    for(ll i = 1; i*i<=n; i++){
        if(n%i == 0){
            if(i*i == n) ans++;
            else ans+=2;
        }
    }

    cout << max(1, ans) <<"\n";
    for(int i = 0; i<x; i++){
        cout << "1 ";
    }
    for(int i = 0; i<y; i++){
        cout << "-1 ";
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