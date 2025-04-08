#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
#define int long long int

bool isPrime(long long x)
{
    if(x < 2) return false;
    if(x == 2) return true;
    if(x % 2 == 0) return false;
    for(long long i = 3; i * i <= x; i += 2){
        if (x % i == 0)
            return false;
    }
    return true;
}

void solve()
{
    int x, k;
    cin >> x >> k;
    
    if(k!=1){
        if(x!=1){
            cout << "NO" << "\n";
            return;
        }
        int temp = 0;
        for(int i = 0; i<k; i++){
            temp = temp*10+1;
        }
        if(isPrime(temp)) cout << "YES\n";
        else cout << "NO\n";
        return;
    }
    if(isPrime(x)) cout << "YES\n";
    else cout << "NO\n";
}

signed main()
{
    FASTIO
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
