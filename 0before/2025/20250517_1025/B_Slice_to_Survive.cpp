#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

int log_2(int x)
{
    int res = 0;
    while(x){
        res++;
        x = (x+1)/2;
        if(x==1) break;
    }
    return res;
}

void solve()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    int ans1 = 0, ans2 = 0, temp;
    if(n%2 && (n+1)/2 == a) temp = max(a, n-a);
    else temp = min(a, n-a+1);
    if(temp != 1) ans1 += log_2(temp);
    if(m != 1) ans1 += log_2(m);

    if(m%2 && (m+1)/2 == b) temp = max(b, m-b);
    else temp = min(b, m-b+1);
    if(n != 1) ans2 += log_2(n);
    if(temp !=1) ans2 += log_2(temp);

    cout << min(ans1, ans2)+1 <<"\n";
}
 
int main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}