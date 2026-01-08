#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n;
int a[101];

void solve()
{
    cin >> n;
    for(int i = 1; i<=n; i++){
        cin >> a[i];
    }

    if(a[1] == 0 && a[n] == 0){
        cout << "Bob\n";
        return;
    }

    bool al = false;

    if(a[1] == 1){
        for(int i = 2; i<=n; i++){
            if(a[i] == 0) al = true;
        }
    }

    if(a[n] == 1){
        for(int i = 1; i<n; i++){
            if(a[i] == 0) al = true;
        }
    }

    bool all1 = true;
    for(int i = 1; i<=n; i++){
        if(a[i] == 0) all1 = false;
    }
    

    if(al || all1) cout << "Alice\n";
    else cout << "Bob\n";
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}