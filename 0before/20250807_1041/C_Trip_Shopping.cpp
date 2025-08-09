#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

int n, k;
int a[200'001];
int b[200'001];
pair<int, int> nx[200'001];
void solve()
{
    cin >> n >> k;
    for(int i = 0; i<n; i++) cin >> a[i];
    for(int i = 0; i<n; i++) cin >> b[i];

    long long int v = 0;
    for(int i = 0; i<n; i++){
        int mn = min(a[i], b[i]);
        int mx = max(a[i], b[i]);
        v += mx-mn;
        nx[i] = {mn, mx};
    }

    sort(nx, nx+n);
    int psb = 1e+9 + 7;
    for(int i = 0; i<n-1; i++){
        int tpsb = -nx[i].second;
        tpsb += nx[i+1].first;
        psb = min(psb, tpsb);

        if(psb <= 0){
            psb = 0;
            break;
        }
    }

    cout << v + 2*psb <<"\n";
}
 
int main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}