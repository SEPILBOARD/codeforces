#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

void solve()
{
    int n, k; cin >> n >> k;
    int num[200001];
    memset(num,0,sizeof(num));
    for(int i = 0; i<n; i++){
        int e; cin >> e;
        num[e]++;
    }
    int ans = 0;
    int nam = 0;
    int trsh = 0;
    for(int i = 1; i<k; i++){
        if(i > k-i) break;
        if(i == k - i){
            ans += num[i]/2;
            nam += num[i]%2;
            break;
        }
        ans += min(num[i], num[k-i]);
        nam += abs(num[i] - num[k-i]);
    }
    for(int i = k; i<=n; i++){
        trsh += num[i];
    }
    // if((nam%2 == 0 && trsh%2!=0) || (nam%2 != 0 && trsh%2 ==0)){
    //     cout << "0\n";
    //     return;
    // }
    cout << ans <<"\n";
}

int main()
{
    FASTIO;
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}