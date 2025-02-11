#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

void solve()
{
    int n; cin >> n;
    set<int> as, bs;
    for(int i = 0 ; i<n; i++){
        int e; cin >> e;
        as.insert(e);
    }
    for(int i = 0 ; i<n; i++){
        int e; cin >> e;
        bs.insert(e);
    }
    int a = as.size();
    int b = bs.size();
    if(a+b <4) cout << "NO\n";
    else cout << "YES\n";
}
 
int main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}