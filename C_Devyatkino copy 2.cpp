#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
#define ll long long int


void solve()
{
    int n;  cin >> n;
    int ans = 0;
    
    int il = n%10;
    if(il>=7) ans = il-7;
    else ans = il+10 -7;

    while(n>0){
        il = n%10;
        ans = min(ans, abs(7-il));
        n /= 10;
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