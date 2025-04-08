#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

int n;

void solve()
{
    cin >> n;
    if(n%2){
        cout << n <<" ";
        for(int i = 1; i<n; i++) cout << i <<" ";
        cout << "\n";
    }
    else cout << "-1\n";
}
 
int main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}