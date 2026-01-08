#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

int t;
int a1, a2, a3, a4;

void solve()
{
    cin >> a1 >> a2 >> a3 >> a4;
    int ans = 1;
    int cas;
    cas = a1 + a2;
    if(a2+cas == a3) ans++;
    if(cas + a3 == a4) ans ++;

    int ans2 = 1;
    cas = a3-a2;
    if(a1+a2 == cas) ans2++;
    if(cas + a3 == a4) ans2++;

    int ans3 = 1;
    cas = a4 - a3;
    if(a1+a2 == cas )ans3++;
    if(a2+cas == a3) ans3++;
    cout << max(ans,max(ans2,ans3))<<"\n";
}

int main()
{
    FASTIO;
    
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}