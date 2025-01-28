#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
 
int t;
 
void solve()
{
    int n, l, r; cin >> n >> l >> r;
    long long int a[100001];
    for(int i = 1; i<=n; i++){
        cin >> a[i];
    }
    sort(a+1, a+l);
    sort(a+l, a+r+1);
    sort(a+r+1, a+n+1);

    long long int lans = 0, rans =0;
    int lidx = 1, ridx = r+1;
    int aidx = r;
    while(aidx >= l){
        if(lidx >= l){
            lans += a[aidx];
            aidx--;
            continue;
        }
        lans += min(a[lidx], a[aidx]);
        lidx++; aidx--;
    }
    aidx = r;
    while(aidx >= l){
        if(ridx > n){
            rans += a[aidx];
            aidx--;
            continue;
        }
        rans += min(a[ridx], a[aidx]);
        ridx++; aidx--;
    }
    cout << min(lans, rans) << "\n";
    return;
}
 
int main()
{
    FASTIO;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

    // cout <<"l: ";
    // for(int i = 1; i<l; i++) cout << a[i] <<" ";
    // cout << "\na: ";
    // for(int i = l; i<=r; i++) cout << a[i] <<" ";
    // cout << "\nr: ";
    // for(int i = r+1; i<=n; i++) cout << a[i] <<" ";
    // cout << "\n";