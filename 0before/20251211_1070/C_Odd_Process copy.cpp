#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n, k;

void solve()
{
    vector<int> even;
    vector<int> odd;
    
    cin >> n;
    for(int i = 0; i<n; i++){
        int a; cin >> a;
        if(a&1) odd.push_back(a);
        else even.push_back(a);
    }
    cin >> k;

    sort(odd.begin(), odd.end(), greater<>());
    sort(even.begin(), even.end(), greater<>());

    int prv = 0;
    int cur = 0;
    for(int i = 1; i<=k; i++){
        
    }
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}