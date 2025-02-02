#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

int a[200001];
void solve()
{
    int n, k; cin >> n >> k;
    for(int i = 1; i<=n; i++){
        cin >> a[i];
    }
    if(n == k){
        for(int i = 2; i<=n; i += 2){
            if(a[i] != i/2){
                cout << i/2 <<"\n";
                return;
            }
        }
        cout << a[n]+1 <<"\n";
        return;
    }
    for(int i = 2; i<=2+n-k; i++){
        if(a[i]!=1){
            cout << "1\n";
            return;
        }
    }
    cout << "2\n";
    return;
}
 
int main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}