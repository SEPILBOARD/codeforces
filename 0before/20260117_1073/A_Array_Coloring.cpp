#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n;
pair<int, int> a[101];

void solve()
{
    cin >> n;
    int cur = 0;
    for(int i = 0; i<n; i++){
        cin >> a[i].first;
        a[i].second = cur;
        cur ^= 1;
    }

    sort(a, a+n);
    for(int i = 1; i<n; i++){
        if(a[i].second == a[i-1].second){
            cout << "NO\n";
            return;
        }
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