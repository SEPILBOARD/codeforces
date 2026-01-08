#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n;
int a[200'001];
int b[200'001];


void solve()
{
    int axr = 0;    
    int bxr = 0;    

    cin >> n;
    for(int i = 1; i<=n; i++){
        cin >> a[i];
        axr ^= a[i];
    }
    for(int i = 1; i<=n; i++){
        cin >> b[i];
        bxr ^= b[i];
    }

    int fs = 0;
    for(int i = 30; i>=0; i--){
        if((axr&(1<<i)) == (bxr&(1<<i))) continue;
        fs = (1<<i);
        break;
    }

    if(fs == 0){
        cout << "Tie\n";
        return;
    }

    for(int i = n; i>0; i--){
        if((a[i]&fs) == (b[i]&fs)) continue;
        if(i&1) cout << "Ajisai\n";
        else cout << "Mai\n";
        return;
    }
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}