#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n;
int a[300'001];

void solve()
{
    set<int> s;

    cin >> n;
    for(int i = 1; i<=n; i++){
        cin >> a[i];
    }

    int ans = 1;
    s.insert(a[1]);
    for(int i = 2; i<=n; i++){
        if(s.count(a[i]-1) == 0){
            ans = i;
        }
        s.insert(a[i]);
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