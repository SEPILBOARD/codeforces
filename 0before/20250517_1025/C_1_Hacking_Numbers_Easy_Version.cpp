#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a;
    for(int i = 0; i<2; i++){
        cout << "digit" <<endl;
        cout.flush();
        cin >> a;
    }
    cout << "add -5" <<endl;
    cout.flush();
    cin >> a;

    cout << "div 5"<<endl;
    cout.flush();
    cin >> a;

    //5
    if(a){
        cout << "add " <<n-1<<endl;
        cout.flush();
        cin >> a;

        cout <<"!"<<endl;
        cout.flush();
        cin >> a;
        return;
    }

    cout << "div 2" <<endl;
    cout.flush();
    cin >> a;
    //4 2 -> 2 1
    if(a){
        cout << "div 2" <<endl;
        cout.flush();
        cin >> a;
        
        cout << "add " <<n-1<<endl;
        cout.flush();
        cin >> a;

        cout <<"!"<<endl;
        cout.flush();
        cin >> a;
        return;
    }
    
    //3 1
    else{
        cout << "div 3" <<endl;
        cout.flush();
        cin >> a;
        
        cout << "add " <<n-1<<endl;
        cout.flush();
        cin >> a;

        cout <<"!"<<endl;
        cout.flush();
        cin >> a;
        return;
    }
}
 
int main()
{
    // FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}