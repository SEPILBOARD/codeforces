#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
#define int long long int

int t;
 
void solve()
{
    int n; cin >> n;
    int a[100];
    int mcnt = 0;
    bool exze = false;
    for(int i = 0; i<n; i++){
        cin >> a[i];
        if(a[i] < 0) mcnt++;
        if(a[i] == 0) exze = true;
    }
    if(exze) cout << "0\n";
    else if(mcnt == 0) cout << "1\n1 0\n";
    else if(mcnt%2 == 1){
        cout << "0\n";
    }
    else{
        for(int i = 0; i<n; i++){
            if(a[i]>0)
            {
                cout << "1\n"<< i+1 <<" 0\n";
                return;
            }
        }
        cout << "1\n1 0\n";
    }
    return;
}
 
signed main()
{
    FASTIO;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}