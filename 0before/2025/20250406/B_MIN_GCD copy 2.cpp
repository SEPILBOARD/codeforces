#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
#define int long long int

int n;
int a[100001];
int dv[100001];

int gcd(int x, int y){
    if(y == 0) return x;
    return gcd(y, x%y);
}

void solve()
{
    cin >> n;
    if(n==2){
        int a, b; cin >> a >> b;
        if(a == b) cout << "Yes\n";
        else cout << "No\n";
        return;
    }
    int mn = 1e+18 +1 ;
    for(int i = 0; i<n; i++){
        cin >> a[i];
        mn = min(mn, a[i]);
    }
    sort(a, a+n);
    int idx = 0;
    for(int i = 1; i<n; i++){
        if(a[i]%a[0]) continue;
        dv[idx] = a[i]/a[0];
        if(dv[idx] == 1){
            cout << "Yes\n";
            return;
        }
        idx ++;
    }
    for(int i = 1; i<idx; i++){
        if(gcd(dv[0], dv[i])==1){
            cout << "Yes\n";
            return;
        }
    }
    cout << "No\n";
}
 
signed main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}