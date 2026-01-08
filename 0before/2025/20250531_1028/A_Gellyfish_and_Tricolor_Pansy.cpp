#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

void solve()
{
    int ja, jb, fa, fb;
    cin >> ja >> fa >> jb >> fb;
    
    if(ja >= fa){
        if(jb >= fa){
            cout << "Gellyfish\n";
        }
        else{
            if(jb >= fb) cout << "Gellyfish\n";
            else cout << "Flower\n";
        }
    }
    else{
        if(fb>ja){
            cout << "Flower\n";
        }
        else{
            if(fb > jb) cout << "Flower\n";
            else cout << "Gellyfish\n";
        }
    }
}
 
int main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}