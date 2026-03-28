#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;


int qry(int i, int j)
{
    cout << "? " <<i <<" " << j <<endl;
    cout.flush();

    int ret;
    cin >> ret;
    return ret;
}

void ans(int i)
{
    cout << "! " <<i <<endl;
    cout.flush();
}

void solve()
{
    int n;
    cin >> n;

    int rsp;

    rsp = qry(1, 2);
    if(rsp == 1){
        cout << "! " << 1 << endl;
        return;
    }

    rsp = qry(2, 3);
    if(rsp == 1){
        cout << "! " << 2 << endl;
        return;
    }

    for(int i = 5; i<=2*n; i+=2){
        rsp = qry(i, i+1);
        if(rsp == 1){
            cout << "! " << i << endl;
            return;
        }
    }

    rsp = qry(1, 3);
    if(rsp == 1){
        ans(1);
    }
    else{
        ans(4);
    }
}

signed main()
{
    // FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}