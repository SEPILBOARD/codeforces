#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n, k;

void solve()
{
    priority_queue<int> even;
    priority_queue<int> odd;
    
    cin >> n;
    for(int i = 0; i<n; i++){
        int a; cin >> a;
        if(a&1) odd.push(a);
        else even.push(a);
    }

    int prv = 0;
    int fmx = 0;
    int smx = 0;
    int cur = 0;
    if(odd.empty()){
        for(int i = 1; i<=n; i++){
            cout << "0 ";
        }
        cout << '\n';
        return;
    }
    else{
        cur = odd.top();
        odd.pop();
    }
    cout << cur << ' ';
    fmx = cur;
    for(int i = 2; i<=n; i++){
        if(even.empty()){
            if(i == n && !(n&1)) cout << "0 ";
            else{
                if(i&1) cout << fmx <<' ';
                else cout << smx << ' ';
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