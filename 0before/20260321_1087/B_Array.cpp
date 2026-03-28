#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n;

void solve()
{
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }

    for(int i = 0; i<n; i++){
        int lcnt = 0;
        int gcnt = 0;
        for(int j = i+1; j<n; j++){
            if(a[i]<a[j]) gcnt++;
            else if(a[i]>a[j]) lcnt++;
        }
        cout << max(lcnt, gcnt) <<" ";
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