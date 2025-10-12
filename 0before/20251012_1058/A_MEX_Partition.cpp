#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n;
int cnt[105];

void solve()
{
    memset(cnt, 0, sizeof cnt);
    cin >> n;
    for(int i = 0; i<n; i++){
        int a; cin >> a;
        cnt[a]++;
    }

    for(int i = 0; i<=101; i++){
        if(cnt[i] == 0){
            cout << i <<"\n";
            return;
        }
    }

}
 
signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}