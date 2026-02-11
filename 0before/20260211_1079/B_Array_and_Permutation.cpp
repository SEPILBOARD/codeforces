#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n;
int idx[200'001];
int p[200'001];
int a[200'001];

void solve()
{
    cin >> n;
    for(int i = 0; i<n; i++){
        cin >> p[i];
        idx[p[i]] = i;
    }
    for(int i = 0; i<n; i++) cin >> a[i];

    int cur = 0;
    for(int i = 0; i<n; i++){
        if(idx[a[i]] < cur){
            cout << "NO\n";
            return;
        }
        cur = idx[a[i]];
    }
    cout << "YES\n";
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}