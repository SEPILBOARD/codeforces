#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
#define int long long int

int l, r;
int pt[12];

void solve()
{
    cin >> l >> r;
    int t = l;
    int n = 0;
    while(t){
        n++;
        t/=10;
    }
    
    bool flag = false;
    int ans = 0;
    while(n){
        if(!flag){
            if(r/pt[n] - l/pt[n] >= 2){
                cout << ans<<"\n";
                return;
            }
            else if(r/pt[n] - l/pt[n] == 1){
                ans+=1;
                flag = true;
            }
            else ans +=2;
        }
        else{
            if(r/pt[n] == 0 && l/pt[n] == 9){
                ans+=1;
                n--;
                continue;
            }
            if(r/pt[n] - l/pt[n] == 1){
                ans+=1;
                n--;
                continue;
            }
            else{
                cout << ans <<"\n";
                return;
            }
        }
        n--;
    }
    cout << ans <<"\n";
}
 
signed main()
{
    pt[1] = 1;
    for(int i = 2; i<=10; i++){
        pt[i] = pt[i-1]*10;
    }

    FASTIO;
    int tc; cin >> tc;
    while (tc--) solve();
    return 0;
}