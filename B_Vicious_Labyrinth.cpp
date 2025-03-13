#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

int n, k;

void solve()
{
    cin >> n >> k;
    //홀수
    if(k%2){
        for(int i = 1; i<=n; i++){
            if(i == n) cout << n-1 <<" ";
            else cout << n <<" ";
        }
    }
    //짝수
    else{
        for(int i = 1; i<=n; i++){
            if(i == n-1) cout << n <<" ";
            else cout << n-1 <<" ";
        }
    }
    cout << "\n";
}
 
int main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}