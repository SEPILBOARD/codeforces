#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

int n;

void solve()
{
    cin >> n;
    int bf;
    cin >> bf;
    int ans = 1;
    for(int i = 1; i<n; i++){
        int e; cin >> e;
        if(bf+1>=e) continue;
        bf = e; ans++;
    }
    cout << ans<<"\n";
}
 
int main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}