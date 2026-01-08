#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

int n;
int a[10'002];

void solve()
{
    cin >> n;
    int div = 987654321;
    for(int i = 1; i<=n; i++){
        cin >> a[i];
        div = min(div, a[i]/(n+1));
    }

    if(a[1] - (n+1)*div == 1){
        for(int i = 2; i<=n; i++){
            cout
        }
    } 

}
 
int main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}