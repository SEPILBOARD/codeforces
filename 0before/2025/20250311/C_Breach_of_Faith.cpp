#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
#define int long long int

int n;
int b[400001];
set<int> s;

void solve()
{
    s.clear();
    int ls = 0;
    int ss = 0;
    cin >> n;
    for(int i = 1; i<=2*n; i++){
        cin >> b[i];
        s.insert(b[i]);
    }
    sort(b+1, b+(2*n+1));
    for(int i = 1; i<=n; i++) ss += b[i];
    for(int i = n+1; i<=2*n; i++) ls += b[i];
    if(s.count(ls-ss) == 0){
        cout << ls-ss <<" ";
        for(int i = 1; i<=n; i++){
            cout << b[n+i] <<" " << b[i] << " ";
        }
        cout << "\n";
        return;
    }
    int idx = 1;
    while(idx <= n){
        ls += b[n-idx+1] - b[n+idx];
        ss += b[n+idx] - b[n-idx+1];
        int temp = b[n-idx+1];
        b[n-idx+1] = b[n+idx];
        b[n+idx] = temp;
        if(ls != ss && s.count(abs(ls-ss)) == 0){
            if(ls > ss){
                cout << ls-ss <<" ";
                for(int i = 1; i<=n; i++){
                    cout << b[n+i] <<" " << b[i] << " ";
                }
                cout << "\n";
                return;
            }
            else{
                cout << ss-ls <<" ";
                for(int i = 1; i<=n; i++){
                    cout << b[i] <<" " << b[n+i] << " ";
                }
                cout << "\n";
                return;
            }
        }
        else{
            ls += b[n-idx+1] - b[n+idx];
            ss += b[n+idx] - b[n-idx+1];
            int temp = b[n-idx+1];
            b[n-idx+1] = b[n+idx];
            b[n+idx] = temp;
            idx++;
        }
    }
}
 
signed main()
{
    FASTIO;
    int t; cin >> t;
    while (t--){
        solve();
    }
    return 0;
}