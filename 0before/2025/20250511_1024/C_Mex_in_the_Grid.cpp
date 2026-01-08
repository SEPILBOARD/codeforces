#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

int a[501][501];

void solve()
{
    int n; cin >> n;
    int v = n*n-1;
    int itv = 0;
    while(itv < n/2){
        for(int i = 1+itv; i<=n-itv; i++){
            a[itv+1][i] = v;
            v--;
        }

        for(int i = 1+itv + 1; i<=n-itv; i++){
            a[i][n-itv] = v;
            v--;
        }

        for(int i = n-itv-1; i>=1+itv; i--){
            a[n-itv][i] = v;
            v--;
        }
        
        for(int i = n-itv-1; i>1+itv; i--){
            a[i][itv+1] = v;
            v--;
        }
        itv++;
    }
    if(n%2) a[n/2+1][n/2+1] = 0;
    
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            cout << a[i][j] <<" ";
        }
        cout << "\n";
    }
}
 
int main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}