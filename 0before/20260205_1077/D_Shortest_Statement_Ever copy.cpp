#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;


void solve()
{
    ll a, b;
    cin >> a >> b;
    scanf("%ld%ld", &a, &b);
    cout << bitset<32>(a) <<"\n";
    cout << bitset<32>(b) <<"\n";
    
    ll ans = b;

    priority_queue<ll> pq;
    for(int i = 0; i<31; i++){
        if((a&(1LL<<i)) && (b&(1LL<<i))){
            ans -= 1LL<<i;
            if(!pq.empty()){
                ans += pq.top();
                pq.pop();
            }
        }
        else if(!(a&(1LL<<i)) && !(b&(1LL<<i))){
            pq.push(1LL<<i);
        }
    }

    cout << a << " " << ans <<"\n";
    while(!pq.empty()) pq.pop();
}

signed main()
{
    // FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}