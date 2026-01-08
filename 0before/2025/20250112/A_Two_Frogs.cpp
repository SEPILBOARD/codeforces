#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

int t, n, a, b;

void solve(){
    cin >> n >> a >> b;
    if(n == 2){
        cout << "NO\n";
        return;
    }
    if(abs(a-b)%2 == 0) cout << "YES\n";
    else cout << "NO\n";
}

int main()
{
    FASTIO;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}