#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

long long int t, n;
long long int a[200000];
void solve()
{
    cin >> n;
    bool ardy = false;
    bool noAns = false;
    long long int nd = 0; long long int le = 2000000009;
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    for(int i= 0; i<n; i++){
        long long int e; cin >> e;
        if(a[i] - e < 0){
            if(ardy){
                noAns = true;
            }
            else{
                nd = e - a[i];
                ardy = true;
            }
        }
        else{
            le = min(le, a[i]-e);
        }
    }
    if(noAns){
        cout << "NO\n";
        return;
    }
    if(!ardy){
        cout << "YES\n";
        return;
    }
    if(nd > le) cout << "NO\n";
    else cout << "YES\n";
}

int main()
{
    FASTIO;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}