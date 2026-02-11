#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int x;

int dsum(int n)
{
    int ret = 0;
    while(n){
        ret += n%10;
        n/=10;
    }
    return ret;
}

void solve()
{
    int ans = 0;

    cin >> x;
    for(int y = x+1; y<=x+100; y++){
        if(y-dsum(y) == x) ans++;
    }
    cout << ans <<"\n";
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}