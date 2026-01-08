#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
#define int long long int

int n, k;
int a[5001];

void solve()
{
    cin >> n >> k;
    for(int i = 0; i<n; i++) cin >> a[i];
    
    for(int s = 0; s<=60; s++){
        int add = 1LL<<s;
        if(k<add) break;
        for(int i = 0; i<n; i++){
            if(k<add) break;
            if(a[i]&add) continue;
            a[i] += add;
            k -= add;
        }
    }

    int ans = 0;
    for(int i = 0; i<n; i++){
        for(int s = 0; s<=60; s++){
            if(a[i]&(1LL<<s)) ans++;
        }
    }
    cout << ans <<"\n";
}
 
signed main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}