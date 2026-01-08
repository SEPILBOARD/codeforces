#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
#define ll long long int

int n;
int a[600'001];

void solve()
{
    cin >> n;
    for(int i = 0; i<n; i++) cin >> a[i];

    ll x = 1;
    for(int i = 0; i<n-1; i++){
        if(a[i+1]%a[i] == 0) continue;

        ll b = a[i]/__gcd(a[i+1], a[i]);
        x = b*x/__gcd(x, b);
    }
    cout << x <<"\n";
}
 
int main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}