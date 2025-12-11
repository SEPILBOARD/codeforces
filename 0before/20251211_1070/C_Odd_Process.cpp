#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n, k;

void solve()
{
    int ecnt = 0;
    int ocnt = 0;
    priority_queue<ll> even;
    ll omx = 0;
    
    cin >> n;
    for(int i = 0; i<n; i++){
        ll a; cin >> a;
        if(a&1){
            omx = max(omx, a);
            ocnt++;
        }
        else{ 
            even.push(a);
            ecnt++;
        }
    }

    ll prv = 0;
    ll fmx = 0;
    ll smx = 0;
    ll cur = omx;
    
    if(cur == 0){
        for(int i = 1; i<=n; i++){
            cout << "0 ";
        }
        cout << '\n';
        return;
    }

    cout << cur << ' ';
    fmx = cur;

    int emcnt = 0;

    for(int i = 2; i<=n; i++){
        if(even.empty()){
            if(i == n && !(ocnt&1)) cout << "0 ";
            else{
                if(emcnt&1) cout << fmx <<' ';
                else cout << smx << ' ';
                emcnt++;
            }
        }
        else{
            cur += even.top();
            even.pop();

            if(cur>fmx){
                smx = fmx;
                fmx = cur;
            }
            else if(cur > smx){
                smx = cur;
            }

            cout << cur << ' ';
        }
    }
    cout << '\n';
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}