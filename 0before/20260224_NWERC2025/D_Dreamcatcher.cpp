#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n;

int main()
{
    cin >> n;
    
    for(int k = n/2; k<n; k++){
        int gcd = __gcd(n, k);
        if(gcd == 1){
            cout << k <<"\n";
            return 0;
        }
    }
}