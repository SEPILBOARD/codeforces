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

    a[n/2+1] = n/2+1;

    int l = n/2;
    int r = n;
    int idx = 1;
    while(l > 0){
        int ridx = r - (idx*2-1);
        int lidx = l - (idx*2);
        if(ridx <= 0) ridx = n + ridx;
        if(lidx <= 0) lidx = n + lidx;

        a[ridx] = r;
        a[lidx] = l;

        idx++;
        l --;
        r --;
        for(int i = 1; i<=n; i++) cout << a[i] <<" ";
        cout << ":\n";
    }

    for(int i = 1; i<=n; i++) cout << a[i] <<" ";
    cout << "\n";
}
 
int main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}