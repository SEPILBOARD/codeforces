#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

long double a[200];

void solve()
{
    long double n; cin >> n;
    int idx = 0;
    while(n >0.0){
        a[idx++] = fmod(n, 10.0);
        n = (n-a[idx-1])/10;
    }
    int i = 0;
    int ans = 0;
    while((int)a[i]==0 && i<idx){
        ans++;
        i++;
    }
    for(int j = i; j<idx-1; j++){
        if(a[j]!=0) ans++;
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