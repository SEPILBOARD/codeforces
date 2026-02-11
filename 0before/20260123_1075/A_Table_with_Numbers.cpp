#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n, h, l;
int a[101];
int cnt[1'001];

void solve()
{
    cin >> n >> h >> l;
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }

    memset(cnt, 0, sizeof cnt);

    sort(a, a+n);
    int lidx = 0;
    int ridx = n-1;
    int ans = 0;
    while(lidx<ridx){
        if(a[lidx]<=min(h, l) && a[ridx]<=max(h, l)){
            ans++;
            lidx++;
            ridx--;
            continue;
        }
        if(a[ridx]>max(h, l)){
            ridx--;
            continue;
        }
        if(a[lidx]>min(h,l)) break;
    }
   cout << ans <<"\n";
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}