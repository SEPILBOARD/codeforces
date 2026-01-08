#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

int a, b, x, y;

void solve()
{
    int cost = 0;
    cin >> a >> b >> x >> y;
    if(a == b) cout << "0\n";
    else if(a>b){
        if(a%2 && a-1==b) cout << y <<"\n";
        else cout << "-1\n";
    }
    else{
        int acnt;
        if(a%2) acnt = (b-a)/2;
        else acnt = (b-a+1)/2;
        cost = (b-a-acnt)*x + acnt*min(x, y);
        cout << cost <<"\n";
    }
    
}   
 
int main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}