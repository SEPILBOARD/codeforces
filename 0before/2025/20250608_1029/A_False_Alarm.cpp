#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

int n, x;
int a[11];

void solve()
{
    cin >> n >> x;
    for(int i = 0; i<n; i++) cin >> a[i];

    int cur = 0;
    int flag = 0;
    for(int i = 0; i<n; i++){
        if(flag == 1){
            cur++;
            if(cur==x){
                flag = 2;
            }
        }
        else if(a[i] == 0) continue;
        else if(a[i] == 1 && flag == 0){
            flag = 1;
            cur++;
            if(cur == x) flag = 2;
        }
        else{
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}
 
int main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}