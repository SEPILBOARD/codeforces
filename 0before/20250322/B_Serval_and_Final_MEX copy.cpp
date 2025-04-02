#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
#define int long long int

int n;
int a[5001];
bool alz;

void solve()
{
    alz = true;
    int temp = 1;
    int k = 0;
    int len = n;
    cin >> n;

    for(int i = 1; i<=n-3; i++){
        cin >> a[i];
        temp *= a[i];
        if(a[i]) alz = false;
    }

    //전부 0
    if(alz){
        cout << "3\n";
        cout << "1 2\n";
        cout << "2 " << n-1 <<"\n";
        cout << "1 2\n";
    }

    else{
        
    }
}
 
int main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}