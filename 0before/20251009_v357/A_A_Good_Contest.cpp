#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n;
string s;
int b;
int a;
 
signed main()
{
    FASTIO;
    cin >> n;

    bool flag = false;
    for(int i = 0; i<n; i++){
        cin >> s;
        cin >> b >> a;
        if(b >= 2400 && b<a) flag = true;
    }
    if(flag) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}