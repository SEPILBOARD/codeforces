#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n;

void solve()
{
    int zcnt = 0;
    int ocnt = 0;

    int n;
    cin >> n;
    for(int i = 0; i<n; i++){
        int a;
        cin >> a;
        if(a == 0) zcnt++;
        else if(a == 1) ocnt++;
    }

    if(zcnt == 1 || (zcnt>1 && ocnt>0)) cout << "YES\n";
    else cout << "NO\n";

}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}