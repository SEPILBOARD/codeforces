#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int qry(int q, int l, int r)
{
    cout << q << " " << l <<" " << r << endl;

    int ret;
    cin >> ret;
    return ret;
}

int n;

void solve()
{
    cin >> n;
    
    int tsumP = qry(1, 1, n);
    int tsumA = qry(2, 1, n);
    int tlen = tsumA-tsumP;

    tsumP = qry(1, 1, 1);
    tsumA = qry(2, 1, 1);
    if(tsumA != tsumP){
        cout << "! 1 " << tlen << endl;
        return;
    }

    int l = 1;
    int r = n+1;

    while(l+1<r){
        int mid = l+r>>1;
        int sumP = qry(1, 1, mid);
        int sumA = qry(2, 1, mid);

        if(sumP==sumA) l = mid;
        else r = mid;
    }

    cout << "! " << r <<" " << r+tlen-1<<endl;
    
}

signed main()
{
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}