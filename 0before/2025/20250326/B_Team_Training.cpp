#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
#define int long long int

int n, x;
int a[200001];

void solve()
{
    cin >> n >> x;
    for(int i = 0; i<n; i++) cin >> a[i];
    sort(a, a+n, greater<>());
    
    int score = 0;
    int curlen = 0;
    int ans = 0;
    for(int i = 0; i<n; i++){
        curlen++;
        score = a[i]*curlen;
        if(score >= x){
            ans++;
            score = 0;
            curlen = 0;
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