#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

ll n; 

signed main()
{
    FASTIO;
    cin >> n;
    for(int a = 0; a<=1000; a++){
        for(int b = 0; b<=10000; b++){
            ll temp = 1'234'567ll*a + 123'456*b;
            if(temp >n) continue;
            if((n-temp)%1234 == 0){
                cout << "YES\n";
                return 0;
            }
        }
    }
    cout << "NO\n";
    return 0;
}