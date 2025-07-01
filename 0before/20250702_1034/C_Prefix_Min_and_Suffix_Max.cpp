#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

int n;
int a[200'001];
int prn[200'001];
int sux[200'001];

void solve()
{
    cin >> n;
    for(int i = 0; i<n; i++) cin >> a[i];

    prn[0] = a[0];
    sux[n-1] = a[n-1];
    for(int i = 1; i<n; i++) prn[i] = min(prn[i-1], a[i]);
    for(int i = n-2; i>=0; i--) sux[i] = max(sux[i+1], a[i]);

    for(int i = 0; i<n; i++){
        if(prn[i] == a[i] || sux[i] == a[i]) cout << '1';
        else cout << '0';
    }
    cout << "\n";

    // for(int i = 0; i<n; i++) cout << sux[i] << " ";
}
 
int main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}