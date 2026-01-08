#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
#define ll long long int


void solve()
{
    int n;  cin >> n;
    int ans = 0;
    
    int il = n%10;
    n /= 10;
    if(il>=7) ans = il-7;
    else ans = il+10 -7;
    int bf = il;

    while(n>0){
        il = n%10;
        // cout << il <<", " <<bf <<": "<<ans <<"\n";

        // if(il>=7) ans = min(ans, il-7);
        // else ans = min(ans, il+10 -7);

        int cr;
        if(il>7) cr = 17-il;
        else cr = 7-il;
        if(bf<cr) cr++;
        ans = min(ans, cr);

        n /= 10;
        bf = il;
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