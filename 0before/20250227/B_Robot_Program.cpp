#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
#define int long long int

int n, x, k;
string s;
int ans;

void solve()
{
    cin >> n >> x >> k;
    cin >> s;
    bool flag = true;
    for(int i = 0; i<n; i++){
        if(s[i] == 'L') x--;
        else x++;
        k--;
        if(x == 0){
            flag =false;
            break;
        }
    }

    if(flag){
        cout << "0\n";
        return;
    }

    ans = 1;
    int cnt = 0;
    flag = true;
    for(int i = 0; i<n; i++){
        cnt++;
        if(s[i] == 'L') x--;
        else x++;
        if(x == 0){
            flag =false;
            break;
        }
    }

    if(flag){
        cout << "1\n";
        return;
    }

    cout << ans + k/cnt <<"\n";
}
 
signed main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}