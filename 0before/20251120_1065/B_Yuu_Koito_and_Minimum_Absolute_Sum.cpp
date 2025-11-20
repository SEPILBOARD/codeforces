#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n;
int a[200'001];

void solve()
{
    cin >> n;
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }

    if(a[0] == -1 && a[n-1] != -1){
        a[0] = a[n-1];
    }
    else if(a[0] != -1 && a[n-1] == -1){
        a[n-1] = a[0];
    }

    cout << abs(a[n-1]-a[0]) <<"\n";
    for(int i = 0; i<n; i++){
        if(a[i] == -1) a[i] = 0;
        cout << a[i] << " ";
    }
    cout << "\n";
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}