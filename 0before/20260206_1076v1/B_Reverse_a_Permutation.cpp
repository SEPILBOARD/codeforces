#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n;
int a[200'001];

void solve()
{
    bool flag = true;
    
    cin >> n;

    int cur = n;
    int sidx = 0;
    int idx = -1;
    for(int i = 0; i<n; i++){
        cin >> a[i];
        if(flag){
            if(a[i] == cur){
                if(i == n-cur){
                    cur--;
                    sidx++;
                }
                else{
                    idx = i;
                    flag = false;
                }
            }
        }
    }
    if(idx == -1){
        for(int i = 0; i<n; i++) cout << a[i] <<" ";
        cout << "\n";
        return;
    }

    for(int i = 0; i<sidx; i++){
        cout << a[i] <<" ";
    }
    for(int i = idx; i>=sidx; i--){
        cout << a[i] <<" ";
    }
    for(int i = idx+1; i<n; i++){
        cout << a[i] <<" ";
    }
    cout <<"\n";
    // cout << idx<<"\n";
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}