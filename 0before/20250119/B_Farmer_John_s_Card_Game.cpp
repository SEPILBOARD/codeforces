#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

void solve()
{
    int crd[2000];
    int n, m;
    cin >> n >> m;
    
    for(int i = 1; i<=n; i++){
        for(int j = 0; j<m; j++){
            int e; cin >> e;
            crd[e] = i;
        }
    }

    for(int i =n; i<n*m; i++){
        if(crd[i] != crd[i-n]){
            cout << "-1\n";
            return;
        }
    }
    for(int i = 0; i<n; i++){
        cout << crd[i] <<" ";
    }
    cout << "\n";
    return;
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