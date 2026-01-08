#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

int n;
int a[200'020];
int b[200'020];

void solve()
{
    cin >> n;
    for(int i = 1; i<=n; i++) cin >> a[i];
    for(int i = 1; i<=n; i++) cin >> b[i];

    int ans = 0;
    for(int i = n; i>=1; i--){
        if(a[i] == b[i]){
            ans = max(ans, i);
            break;
        }
    }

    for(int i = n; i>1; i--){
        if(a[i] == a[i-1] || b[i] == b[i-1]){
            ans = max(ans, i-1);
        }
        if(i>2){
            if(a[i] == a[i-2] || b[i] == b[i-2] || b[i] == a[i-2] || a[i] == b[i-2]){
                ans = max(ans, i-2);
            }
        }
        if(i>3){
            if(b[i] == a[i-3] || a[i] == b[i-3]){
                ans = max(ans, i-3);
            }
        }
    }
    cout << ans <<"\n";
}
 
int main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}