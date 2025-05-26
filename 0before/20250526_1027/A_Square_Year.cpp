#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

void solve()
{
    int in; cin >> in;
    for(int i = 0; i<= 99; i++){
        for(int j = 0; j<= 99; j++){
            if(pow(i+j, 2) == in){
                cout << i <<" " <<j <<"\n";
                return;
            }
        }
    }
    cout << "-1\n";
}
 
int main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}