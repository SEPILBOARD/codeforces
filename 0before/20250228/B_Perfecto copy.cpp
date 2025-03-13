#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
#define ll long long int

set<ll> s;

void solve()
{
    int n; cin >> n;
    if(n == 1){
        cout << "-1\n";
        return;
    }
    cout << "2 1 ";
    ll cur = 3;
    bool flag = true;
    for(int i = 3; i<n; i++){
        if(s.find(cur+i) == s.end()) cout << i <<" ";
        else{
            if(i==n-1) flag = false;
            cout << i+1 <<" " << i <<" ";
            i++;
        }
    }
    if(flag) cout << n;
    cout << "\n";
}
 
int main()
{
    FASTIO;
    for(int i = 1; i<353556; i++){
        s.insert(i*i);
    }

    int t; cin >> t;
    while (t--) solve();
    return 0;
}