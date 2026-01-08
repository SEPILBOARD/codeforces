#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
#define int long long int

int t;
 
priority_queue<int> pq;
void solve()
{
    int n; cin >> n;
    int ans = 0;
    for(int i = 0; i<n; i++){
        int e; cin >> e;
        if(e){
            pq.push(e);
        }
        else{
            if(!pq.empty()){
                ans += pq.top();
                pq.pop();
            }
        }
    }
    while(!pq.empty()){
        pq.pop();
    }
    cout << ans <<"\n";
    return;
}
 
signed main()
{
    FASTIO;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}