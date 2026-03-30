#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n, l, r;
int a[400'005];

void solve()
{
    cin >> n >> l >> r;

    int psum = 0;
    for(int i = 1; i<=n; i++){
        if(i == r){
            a[i] = (l-1)^psum;
            psum ^=a[i];
        }
        else{
            a[i] = i^psum;
            psum ^= a[i];
        }
    }

    for(int i = 1; i<=n; i++){
        cout << a[i] <<" ";
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