#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
#define ll long long int

bool in7(ll x)
{
    ll n = x;
    while(n>0){
        if(n%10 == 7) return true;
        n /= 10;
    }
    return false;
}

void solve()
{
    ll n;  cin >> n;
    int ans = 0;
    while(!in7(n)){
        cout << ans << ": " <<n <<"\n";
        n += 9;
        ans ++;
    }
    cout << ans <<"\n";
}
 
int main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}