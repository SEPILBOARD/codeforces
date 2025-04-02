#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

int n;
int a[200001];

void solve()
{
    cin >> n;
    if(!(n%2)){
        cout << "-1\n";
        return;
    }

    else if(n == 3){
        cout << "1 3 2\n";
        return;
    }

    for(int i = 1; i <= n; i++){
        int num = (2 * i - 1) % n;
        if(num == 0) num = n;
        cout << num << " ";
    }
    cout << "\n";
}
 
int main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}