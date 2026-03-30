#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n, l, r;
int a[400'005];

void solve()
{
    uint64_t seed =
    std::chrono::high_resolution_clock::now().time_since_epoch().count()
    ^ (uint64_t)(uintptr_t)(&seed)
    ^ ((uint64_t)std::random_device{}() << 1);

    std::mt19937 mt(seed); 
    std::uniform_int_distribution<int> rnd(1, 1e+9);
    
    cin >> n >> l >> r;
    vector<int> a(n+1, 0);
    
    if((r-l+1)%2){
        int lidx = (r+l)/2-1;
        int ridx = (r+l)/2+1;

        a[(r+l)/2] = 3;
        a[lidx--] = 2;
        a[ridx++] = 1;
        
        while(l<=lidx && ridx<=r){
            int cur = rnd(mt);
            a[lidx--] = cur;
            a[ridx++] = cur;
        }
    }
    else{
        int lidx = (r+l)/2;
        int ridx = (r+l)/2+1;
        while(l<=lidx && ridx<=r){
            // cout << lidx <<", " << ridx <<"\n";
            int cur = rnd(mt);
            a[lidx--] = cur;
            a[ridx++] = cur;
        }
        swap(a[l], a[(r+l)/2]);
    }

    for(int i = 1; i<=n; i++){
        // cout << a[i] <<" ";
        if(a[i]) cout << a[i] <<" ";
        else cout << rnd(mt) <<" ";
    }
    cout << "\n";
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}