#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

void solve()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    int ans1 = 0, ans2 = 0, temp;

    if(n%2 && (n+1)/2 == a) max(a, n-a);
    else temp = min(a, n-a);
    if(temp != 1) ans1 += (temp+1)/2;
    if(m != 1) ans1 += (m+1)/2;

    if(m%2 && (m+1)/2 == b) max(b, m-b);
    else temp = min(b, m-b);
    if(n != 1) ans2 += (n+1)/2;
    if(temp !=1) ans2 += (temp+1)/2;

    cout << min(ans1, ans2)+1 <<"\n";
}
 
int main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}