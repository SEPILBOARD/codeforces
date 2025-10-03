#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n;


void solve()
{
    set<int> s;
    cin >> n;
    for(int i = 0; i<n; i++){
        int a; 
        cin >> a;
        s.insert(a);
    }
    cout << s.size()*2 - 1 <<"\n";
}
 
signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}