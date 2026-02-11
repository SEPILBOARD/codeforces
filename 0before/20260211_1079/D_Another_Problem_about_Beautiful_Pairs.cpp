#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n;
int a[200'001];

void solve()
{
    cin >> n;
    for(int i = 0; i<n; i++) cin >> a[i];

    ll ans = 0;
    for(int i = 0; i<n; i++){
        if(a[i]>=500){
            int l = i-a[i];
            int r = i+a[i];
            while(0<=l || r<n){
                if(0<=l){
                    if(i-l == 1L*a[l]*a[i]) ans++;
                    l-=a[i];
                }
                if(r<n){
                    if(r-i == 1LL*a[i]*a[r]) ans++;
                    r+=a[i];
                }
            }
        }
        else{
            for(int aj = 1; aj<500; aj++){
                ll idx = 1LL*aj*a[i] + i;
                if(idx>=n) continue;
                if(a[idx] == aj){
                    ans++;
                }
            }
        }
    }
    
    cout <<  ans <<"\n";
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}