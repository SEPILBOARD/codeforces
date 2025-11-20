#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n;
int a[200'001];
int b[200'001];

void solve()
{   
    int acnt = 0;
    int bcnt = 0;

    cin >> n;
    for(int i = 1; i<=n; i++){
        cin >> a[i];
        if(a[i]) acnt++;
    }
    for(int i = 1; i<=n; i++){
        cin >> b[i];
        if(b[i]) bcnt++;
    }

    if((acnt&1) == (bcnt&1)){
        cout << "Tie\n";
        return;
    }
    
    for(int i = n; i>0; i--){
        if(a[i] != b[i]){
            if(i&1) cout << "Ajisai\n";
            else cout << "Mai\n";
            return;
        }
    }

}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}