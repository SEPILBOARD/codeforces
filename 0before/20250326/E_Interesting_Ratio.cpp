#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
#define int long long int
#define MAX 10000001

int ans;
bool isnp[MAX];

void solve()
{
    int n; cin >> n;
    ans = 0;
    for(int i = 2; i<=n; i++){
        if(!isnp[i]){
            ans += n/i;
        }
    }
    cout << ans <<"\n";
}
 
signed main()
{
    FASTIO;
    int t; cin >> t;
    for(int i = 2; i*i<= MAX; i++){
        if(!isnp[i]){
            for(int j = i*i; j<= MAX; j += i){
                isnp[j] = true;
            }
        }
    }
    // for(int i = 2; i<=100; i++){
    //     if(!isnp[i]) cout << i <<", ";
    // }
    while (t--) solve();
    return 0;
}