#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n;
ll x;
tuple<int, int, int> abc[100'001];

bool compare(tuple<int, int, int> &f, tuple<int, int, int> &s)
{
    auto[fa, fb, fc] = f;
    auto[sa, sb, sc] = s;

    return (1LL*fa*fb-fc) > (1LL*sa*sb-sc);
}

void solve()
{
    ll cur = 0LL;

    cin >> n >> x;
    for(int i = 0; i<n; i++){
        int a, b, c;
        cin >> a >> b >> c;
        abc[i] = {a, b, c};

        cur += 1LL*a*(b-1);
    }

    sort(abc, abc+n, compare);

    if(cur>=x){
        cout << "0\n";
        return;
    }

    auto[a, b, c] = abc[0];
    ll dist = 1LL*a*b-c;
    if(dist<=0LL){
        cout << "-1\n";
        return;
    }
    cout << (x-cur+dist-1)/dist <<"\n";
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}