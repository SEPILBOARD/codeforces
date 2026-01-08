#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a;
    for(int i = 0; i<2; i++){
        cout << "digit";
        cout.flush();
        cin >> a;
    }

    cout << "div 2";
    cout.flush();
    cin >> a;
    if(!a){
        cout << "add 1";
        cout.flush();
        cin >> a;
    }
    while(true){
        cout << "div 2";
        cout.flush();
        cin >> a;
        if(!a) break;
    }
    cout << "add " <<n-1;
    cout.flush();
    cin >> a;

    cout <<"!";
    cout.flush();
    cin >> a;
}
 
int main()
{
    // FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}