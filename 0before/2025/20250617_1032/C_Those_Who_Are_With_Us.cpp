#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

int n, m;
vector<pair<int, int>> a;

void solve()
{
    a.clear();
    cin >> n >> m;
    int maxi = 0;

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            int e; cin >> e;
            if(e>maxi){
                maxi = e;
                a.clear();
                a.push_back({i, j});
            }
            else if(e == maxi){
                a.push_back({i, j});
            }
        }
    }

    bool lflag = false;
    int rm = a[0].first;
    int cm = a[0].second;

    bool flag = true;
    int c = -1;
    for(auto p : a){
        int i = p.first, j = p.second;
        if(i != rm){
            if(c == -1) c = j;
            else if(c != j){
                flag = false;
                break;
            }
        }
    }
    if(flag) lflag = true;

    flag = true;
    int r = -1;
    for(auto p : a){
        int i = p.first, j = p.second;
        if(j != cm){
            if(r == -1) r = i;
            else if(r != i){
                flag = false;
                break;
            }
        }
    }
    if(flag) lflag = true;

    int answer = maxi - (lflag ? 1 : 0);
    cout << answer << "\n";
}
 
int main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}