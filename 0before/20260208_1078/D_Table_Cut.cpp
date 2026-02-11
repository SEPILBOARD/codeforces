#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n, m;

void solve()
{   
    cin >> n >> m;
    vector<vector<int> > a(n+1, vector<int>(m+1, 0));
    int tot = 0;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=m; j++){
            cin >> a[i][j];
            tot += a[i][j];
        }
    }

    int cur  = 0;
    int x = 0, y = 0;
    for(int i = 1; i<=n; i++){
        for(int j = m; j>=1; j--){
            cur += a[i][j];
            if(cur == tot/2){
                x = i, y = j;
                break;
            }
        }

        if(cur == tot/2){
            break;
        }
    }

    cout << (tot/2)*(tot/2+(tot%2)) << '\n';
    
    int cnt = 1;
    for(int i = 1; i<x; i++){
        cout << "D";
        cnt++;
    }
    for(int i = 1; i<y; i++){
        cout << "R";
        cnt++;
    }
    cout << "D";
    for(int i = y; i<=m; i++){
        cout << "R";
        cnt++;
    }
    for(int i = cnt; i<n+m; i++){
        cout << "D";
    }
    cout << "\n";
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}