#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

int n;
int a[100];

void solve()
{
    int sum = 0;
    cin >> n;
    for(int i = 0; i<n; i++){
        cin >> a[i];
        sum += a[i];
        if(a[i] == 0) sum++;
    }
    cout << sum <<"\n";
}
 
int main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}