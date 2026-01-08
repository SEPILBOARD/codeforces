#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

int n, j, k;
int a[200'001];

void solve()
{
    cin >> n >> j >> k;
    for(int i = 1; i<=n; i++) cin >> a[i];

    if(k == 1){
        for(int i = 1; i<=n; i++){
            if(a[i] > a[j]){
                cout << "NO\n";
                return;
            }
        }
        cout <<"YES\n";
    }
    else cout << "YES\n";
}
 
int main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}