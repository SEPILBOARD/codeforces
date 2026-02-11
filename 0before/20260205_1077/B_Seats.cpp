#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n;
char a[200'001];

void solve()
{
    int ans = 0;

    cin >> n;
    for(int i = 1; i<=n; i++){
        cin >> a[i];
        if(a[i] == '1') ans++;
    }

    if(n == 1){
        cout << "1\n";
        return;
    }

    a[0] = '0';
    int cnt = 0;
    for(int i = 0; i<=n; i++){
        if(a[i] == '1'){
            cnt = 0;
            continue;
        }

        if(cnt <= 1) cnt++;
        else{
            a[i] = '1';
            cnt = 0;
            ans++;
        }
    }
    if(cnt == 2) ans++;

    // for(int i = 1; i<=n; i++) cout << a[i];
    // cout << "\n";
    cout << ans <<"\n";
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}