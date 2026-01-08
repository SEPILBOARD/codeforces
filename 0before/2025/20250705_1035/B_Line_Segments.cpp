#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
#define int long long int

int n;
int px, py, qx, qy;
int a[1001];

void solve()
{
    int sum = 0;
    int mx = 0;

    cin >> n;
    cin >> px >> py >> qx >> qy;
    for(int i = 1; i<=n; i++){
        cin >> a[i];
        mx = max(mx, a[i]);
        sum += a[i];
    }

    int dist = pow(px-qx ,2)+pow(py-qy ,2);

    if(n==1){
        if(dist == a[1]*a[1]) cout << "Yes\n";
        else cout << "No\n";
        return;
    }
    
    if(pow(max(0ll,mx-(sum-mx)), 2) <= dist && dist<= sum*sum){
        cout << "Yes\n";
        return;
    }
    cout << "No\n";

    // cout << abs(mx-(sum-mx));
}
 
signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}