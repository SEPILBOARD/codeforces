#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

int n;
int a[200'001];

void solve()
{
    cin >> n;
    for(int i = 0; i<n; i++) cin >> a[i];

    if(n == 2){
        cout << a[0]+min(a[0], a[1]) <<"\n";
        return;
    }

    cout << min(a[0]+a[1], a[0]+min(a[0], a[1]+a[2])) <<"\n";
}
 
int main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}