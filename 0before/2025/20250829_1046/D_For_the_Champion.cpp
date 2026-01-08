#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
#define ll long long int

int n;
pair<int, int> xy[101];
ll dist;

void qst(char c, int k)
{
    cout << "? " << c << " " << k << endl;
    cout.flush();
    cin >> dist;
}

void solve()
{
    cin >> n;
    ll xpy = -1*(1e+18);
    ll xmy = -1*(1e+18);
    for(int i = 0; i<n; i++){
        ll x, y;
        cin >> x >> y;
        xpy = max(xpy, x+y);
        xmy = max(xmy, x-y);
    }

    qst('R', 1'000'000'000);
    qst('R', 1'000'000'000);
    qst('U', 1'000'000'000);
    qst('U', 1'000'000'000);
    ll XpY = dist + xpy - 2LL*2'000'000'000;

    qst('D', 1'000'000'000);
    qst('D', 1'000'000'000);
    qst('D', 1'000'000'000);
    qst('D', 1'000'000'000);
    ll XmY = dist + xmy - 2LL*2'000'000'000;

    ll X = (XpY + XmY)/2;
    ll Y = (XpY - XmY)/2;
    cout << "! " << X <<" " << Y <<endl;
    cout.flush();
}
 
signed main()
{
    // FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}