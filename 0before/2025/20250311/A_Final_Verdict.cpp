#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

int n, x;

void solve()
{
    cin >> n >> x;
    int sum = 0;
    for(int i = 0; i<n; i++){
        int e; cin >> e;
        sum += e;
    }
    if(sum%x == 0){
        if(n == (sum/x)) cout << "YES\n";
        else cout << "NO\n";
    }
    else cout << "NO\n";
}
 
int main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}