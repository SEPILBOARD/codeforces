#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n;
int a[101];

void solve()
{
    cin >> n;
    for(int i = 0; i<n; i++) cin >> a[i];

    int cnt = 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<i; j++){
            if(a[j]>a[i]){
                // cout << a[i] <<"\n";
                cnt++;
                break;
            }
        }
    }
    cout << cnt << '\n';
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}