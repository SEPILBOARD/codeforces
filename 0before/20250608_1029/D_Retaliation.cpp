#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
#define int long long int

int n;
int a[200'003];
int b[200'003];

void solve()
{
    cin >> n;
    for(int i = 1; i<=n; i++){
        cin >> a[i];
    }
    
    if(a[1]<a[2]){
        int fa = 2*a[1]-a[2];
        if(fa<0 || fa%(n+1) != 0){
            cout << "NO\n";
            return;
        }

        int d = a[2] - a[1];
        for(int i = 1; i<=n; i++){
            if((a[i]-fa)%d == 0 && (a[i]-fa)/d == i) continue;
            cout << "NO\n";
            return;
        }
        cout << "YES\n";
    }
    else{
        int fa = 2*a[n]-a[n-1];
        if(fa<0 || fa%(n+1) != 0){
            cout << "NO\n";
            return;
        }
        int d = a[n-1] - a[n];
        if(d == 0){
            for(int i = 1; i<=n; i++){
                if(a[i] != fa){
                    cout << "NO\n";
                    return;
                }
            }
            cout << "YES\n";
            return;
        }
        for(int i = n; i>=1; i--){
            if((a[i]-fa)%d == 0 && (a[i]-fa)/d == n-i+1) continue;
            cout << "NO\n";
            return;
        }
        cout << "YES\n";
    }
}
 
signed main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}