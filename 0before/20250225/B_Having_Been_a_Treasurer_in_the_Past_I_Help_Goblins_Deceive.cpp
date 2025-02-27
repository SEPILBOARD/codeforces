#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
#define int long long int

void solve()
{
    int n;
    int h=0, u = 0;
    cin >> n;
    for(int i = 0; i<n; i++){
        char c; cin >> c;
        if(c=='-') h++;
        else u++;
    }
    if(h%2){
        cout << (h/2+1)*u*(h/2) <<"\n";
    }
    else{
        cout << (h/2)*u*(h/2) <<"\n";
    }
}
 
signed main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}