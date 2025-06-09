#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

int n;
int a[200'005];

void solve()
{
    cin >> n;
    int lidx = 1;
    int ridx = n;
    int k = 1;
    while(lidx<=ridx){
        a[lidx++] = k++;
        if(lidx-1 == ridx) break;
        a[ridx--] = k++;
    }
    for(int i = 1; i<=n; i++) cout << a[i] <<" ";
    cout << "\n";
}
 
int main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}