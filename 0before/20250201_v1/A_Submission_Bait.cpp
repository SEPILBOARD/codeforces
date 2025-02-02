#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
 
int t;
 
void solve()
{
    int n; cin >> n;
    map<int, int, greater<>> m;
    for(int i = 0 ; i<n; i++){
        int e; cin >> e;
        m[e]++;
    }
    for(auto e: m){
        if(e.second%2){
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}
 
int main()
{
    FASTIO;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}