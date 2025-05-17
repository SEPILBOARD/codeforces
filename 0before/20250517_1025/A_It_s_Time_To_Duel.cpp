#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

int a[101];

void solve()
{
    int n;
    cin >> n;
    int flag = 1;
    for(int i = 0; i<n; i++){
        cin >> a[i];
        flag *= a[i];
    }
    
    if(n == 2){
        if(a[0] == a[1]) cout << "YES\n";
        else cout << "NO\n";
        return;
    }

    if(flag){
        cout << "YES\n";
        return;
    }
    else{
        for(int i = 0; i<n-1; i++){
            if(a[i] == 0 && a[i+1] == 0){
                cout << "YES\n";
                return;
            }
        }
        cout << "NO\n";
    }
}

int main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}