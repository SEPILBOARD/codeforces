#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
#define int long long int

int n;
int a[200'002];
int b[200'002];

void solve()
{
    cin >> n;
    int div = 987654321;
    for(int i = 1; i<=n; i++){
        cin >> a[i];
        div = min(div, a[i]/(n+1));
    }
    for(int i = 1; i<=n; i++){
        b[i] = a[i]-(n+1)*div;
    }

    if(n ==2){
        int dfr = abs(b[1] - b[2]);
        if(min(a[1], a[2])>=dfr && (min(a[1], a[2])-dfr)%3 ==0) cout << "YES\n";
        else cout << "NO\n";
        return;
    }

    int k;
    if(b[1]<b[n]){
        k = b[1];
        for(int i = 2; i<=n; i++){
            if(b[i]-b[i-1] != k){
                cout << "NO\n";
                return;
            }
        }
    }
    else{
        k = b[n];
        for(int i = n-1; i>=1; i--){
            if(b[i]-b[i+1] != k){
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
}
 
signed main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}