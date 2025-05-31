#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

int n;
int a[5001];

int gcd(int x, int y)
{
    if(y == 0) return x;
    return gcd(y, x%y);
}

void solve()
{
    cin >> n;
    cin >> a[1];
    if(n==1){
        cout << "0\n";
        return;
    }
    cin >> a[2];
    int ag = gcd(a[1], a[2]);
    for(int i = 3; i<=n; i++){
        cin >> a[i];
        ag = gcd(ag, a[i]);
    }
    // cout << ag <<"\n";

    int scnt = 0;
    for(int i = 1; i<=n; i++){
        if(a[i]==ag) scnt ++;
    }
    if(scnt > 0){
        cout << n-scnt <<"\n";
        return;
    }
    int m = n;
    for(int i = 1; i<=n; i++){
        int tgcd = a[i];
        int cnt = 1;
        bool flag = false;
        for(int j = i+1; j<=n; j++){
            tgcd = gcd(tgcd, a[j]);
            cnt++;
            if(tgcd == ag){
                flag = true;
                cnt = j-i+1;
                break;
            }
        }
        if(flag)
        m = min(m, cnt);
    }
    cout << n+m-2 <<"\n";
    
}
 
int main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}