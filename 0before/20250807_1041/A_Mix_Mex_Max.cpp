#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

int n;

void solve()
{
    cin >> n;
    int af = -2;
    bool flag = true;
    for(int i = 0; i<n; i++){
        int a; cin >> a;
        if(a == -1) continue;
        if(af == -2){
            af = a;
            continue;
        }
        if(af != a) flag = false;
    }
    if(flag && af!=0) cout << "YES\n";
    else cout << "NO\n";
}
 
int main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}