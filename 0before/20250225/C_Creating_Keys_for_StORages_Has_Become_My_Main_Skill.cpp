#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
#define int long long int

int n, x;

void solve()
{
    cin >> n >> x;
    int psb = 0;
    int tx = x;
    int p2 = 0;
    bool flag = true;
    while(tx != 0){
        if(tx%2==0) flag = false;
        if(flag) psb++;
        p2 ++;
        tx/=2;
    }
    if(psb == -1){
        for(int i = 0; i<n-1; i++){
            cout << "0 ";
        }
        cout << x <<"\n";
        return;
    }
    else{
        int pn = pow(2, psb);
        int cnt = 0;
        for(int i = 0; i<n-1; i++){
            if(i>=pn) break;
            cout << i << " ";
            cnt ++;
        }
        for(int i = 0; i<n-cnt-1; i++){
            cout << "0 ";
        }
        int cp2 = 0;
        int tcnt = cnt;
        while(tcnt != 0){
            cp2++;
            tcnt /= 2;
        }
        if(cp2 == p2) cout << cnt <<"\n";
        else cout << x <<"\n";
    }
}
 
signed main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}