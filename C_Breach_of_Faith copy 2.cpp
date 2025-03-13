#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
#define int long long int

int n;
int a1[200001];
int a2[200001];
set<int> s;

void solve()
{
    int sum1 = 0;
    int sum2 = 0;
    cin >> n;
    for(int i = 0; i<n; i++){
        cin >> a1[i];
        sum1 += a1[i];
        s.insert(a1[i]);
    }
    for(int i = 0; i<n; i++){
        cin >> a2[i];
        sum2 += a2[i];
        s.insert(a2[i]);
    }
}
 
signed main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}