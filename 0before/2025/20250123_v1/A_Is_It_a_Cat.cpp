#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
 
int t;

void solve()
{
    int n; cin >> n;
    int k = 1;
    string a;
    cin >> a;
    if(a[0] != 'm' && a[0] !='M'){
        cout << "NO\n";
        return;
    }
    for(int i = 0; i<n; i++){
        if(k == 1){
            if(a[i] == 'm' || a[i] == 'M') continue;
            else if(a[i] == 'e' || a[i] == 'E'){
                k++;
                continue;
            }
            else{
                cout << "NO\n";
                return;
            }
        }

        else if(k == 2){
            if(a[i] == 'e' || a[i] == 'E') continue;
            else if(a[i] == 'o' || a[i] == 'O'){
                k++;
                continue;
            }
            else{
                cout << "NO\n";
                return;
            }
        }

        else if(k == 3){
            if(a[i] == 'o' || a[i] == 'O') continue;
            else if(a[i] == 'w' || a[i] == 'W'){
                k++;
                continue;
            }
            else{
                cout << "NO\n";
                return;
            }
        }
        
        else if(k == 4){
            if(a[i] == 'w' || a[i] == 'W') continue;
            else{
                cout << "NO\n";
                return;
            }
        }
    }
    if(k == 4) cout << "YES\n";
    else cout << "NO\n";
    return;
}
 
int main()
{
    FASTIO;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}