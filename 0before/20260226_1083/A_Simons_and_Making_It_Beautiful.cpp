#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n;
int p[501];

void solve()
{   
    int idx = 0;
    cin >> n;
    for(int i = 1; i<=n; i++){
        cin >> p[i];
        if(p[i] == n) idx = i;
    }

    swap(p[1], p[idx]);
    for(int i = 1; i<=n; i++){
        cout << p[i] <<" ";
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