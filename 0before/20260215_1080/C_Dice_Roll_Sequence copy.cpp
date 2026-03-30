#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n;
int a[300'001];

void solve()
{
    cin >> n;
    for(int i = 0; i<n; i++) cin >> a[i];

    int ans = 0;
    bool flag = false;
    for(int i = 1; i<n; i++){
        if(a[i]+a[i-1] == 7){
            if(flag){
                flag = false;
            }
            else{
                ans++;
            }
        }
        else{
            flag = false;
        }
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