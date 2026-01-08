#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

int n;
int p[5001];
int l[5001];
int r[5001];

void solve()
{
    cin >> n;
    memset(l, 0, sizeof(int)*(n+1));
    memset(r, 0, sizeof(int)*(n+1));
    for(int i = 0; i<n; i++) cin >> p[i];

    int ans = 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<i; j++){
            if(p[i]<p[j]) l[i]++;
        }
        for(int j = i+1; j<n; j++){
            if(p[i]<p[j]) r[i]++;
        }
    }

    for(int i = 0; i<n; i++){
        if(l[i]>r[i]) p[i] = 2*n-p[i];
    }

    for(int i = 0; i<n; i++){
        // cout << p[i] <<" ";
        for(int j = i+1; j<n; j++){
            if(p[i]>p[j]) ans++;
        }
    }
    cout << ans <<"\n";
}
 
int main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}