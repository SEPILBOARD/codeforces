#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

void solve()
{
    int n; cin >> n;
    int mx_n=-1;
    map<int, int> m;
    
    for(int i = 0; i<n; i++){
        int e; cin >> e;
        m[e]++;
        mx_n = max(mx_n, e);
    }
    int idx = 1;
    bool flag = true;
    while(idx<= mx_n){
        if(m[idx] == 1){
            cout << "No\n";
            return;
        }
        if(m[idx]>2){
            m[idx+1] += m[idx] -2;
        }
        idx ++;
    }
    cout << "Yes\n";
    return;
}
 
int main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}