#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
#define int long long int

int t;
 
void solve()
{
    int n, m;
    priority_queue<int, vector<int>,greater<int>> a;
    priority_queue<int, vector<int>,greater<int>> b;
    cin >> n >> m;
    for(int i = 0; i<n; i++){
        int e; cin >> e;
        a.push(e);
    }
    for(int i = 0; i<m; i++){
        int e; cin >> e;
        b.push(e);
    }
    while(a.size() > m){
        int e = a.top();
        if(e > b.top()){
            cout << "No\n";
            return;
        }
        if(e == b.top()){
            a.pop(); b.pop();
            m--;
            if(m == 0){
                if(a.empty()){
                    cout << "Yes\n";
                    return;
                }
                else{
                    cout << "No\n";
                    return;
                }
            }
        }
        a.pop();
        if(e+1<a.top()){
            cout << "No\n";
            return;
        }
        e += a.top(); a.pop();
        a.push(e);
    }
    int k = a.size();
    for(int i = 0; i<k; i++){
        if(a.top() != b.top()){
            cout << "No\n";
            return;
        }
        a.pop(); b.pop();
    }
    cout << "Yes\n";
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