#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
#define int long long int

int n;
int b[400001];

void solve()
{
    int asum = 0;
    int osum = 0;
    cin >> n;
    for(int i = 1; i<=2*n; i++){
        //홀수
        cin >> b[i];
        if(i%2) osum += b[i];
        else asum += b[i];
    }
    if(asum > osum){
        cout << asum - osum <<" ";
        for(int i = 1; i<=2*n; i+=2){
            cout << b[i+1] << " " << b[i] << " ";
        }
    }
    else if(osum > asum){
        cout << osum - asum <<" ";
        for(int i = 1; i<=2*n; i+=2){
            cout << b[i] << " " << b[i+1] << " ";
        }
    }
    else{
        
    }
}
 
signed main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}