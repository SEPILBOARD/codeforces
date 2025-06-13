#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

int n;

void solve()
{
    cin >> n;
    cout << 2*n-3 <<"\n";
    cout << "1 1 " << n <<"\n";
    cout << "2 2 " << n <<"\n";
    cout << "3 1 " << n-1 <<"\n";
    for(int i = 4; i<=n; i++){
        cout << i <<" 1 " << i-2<<"\n";
        cout << i << " " << i-1<<" " <<n<<"\n";
    }
}
 
int main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}