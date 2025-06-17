#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

int n, m;
vector<int> a[100'000];

void solve()
{
    int r1, c1, r2, c2;
    int m1 = 0, m2 = 0;

    cin >> n >> m;
    for(int i = 0; i<n; i++){
        a[i].clear();
        for(int j = 0; j<m; j++){
            int e; cin >> e;
            a[i].push_back(e);
            if(m1<e){
                m1 = e;
                r1 = i, c1 = j;
            }
        }
    }

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(i == r1 && j == c1) continue;
            if(m2<a[i][j]){
                m2 = a[i][j];
                r2 = i, c2 = j;
            }
        }
    }

    int mx1 = 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(i == r1 || j == c2) mx1 = max(mx1, a[i][j]-1);
            else mx1 = max(mx1, a[i][j]);
        }
    }
    int mx2 = 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(i == r2 || j == c1) mx2 = max(mx1, a[i][j]-1);
            else mx2 = max(mx1, a[i][j]);
        }
    }

    cout << min(mx1, mx2)<<"\n";
}
 
int main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}