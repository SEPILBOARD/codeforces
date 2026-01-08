#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

int n, x;
char a[200'001];

void solve()
{
    int lcnt = 0, rcnt = 0;

    cin >> n >> x;
    for(int i = 1; i<=n; i++){
        cin >> a[i];
        if(a[i] == '#'){
            if(i<x) lcnt++;
            else rcnt++;
        }
    }
    if(x == 1 || x == n || (lcnt == 0 && rcnt == 0)){
        cout << "1\n";
        return;
    }
    int nl = 1, nr = n;
    for(int i = x; i>=0; i--){
        if(a[i] == '#'){
            nl = i;
            break;
        }
    }
    for(int i = x; i<=n; i++){
        if(a[i] == '#'){
            nr = i;
            break;
        }
    }
    if(nl<n-nr+1) nl = x-1;
    else nr = x+1;
    cout << min(nl, n-nr+1)+1 <<"\n";
}
 
int main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}