#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n, x, y;

void solve()
{
    cin >> n >> x >> y;
    vector<int> se;
    vector<int> m;

    for(int i = 1; i<=x; i++){
        int p; cin >> p;
        se.push_back(p);
    }

    int midx = 0;
    int mn = 1e+9;
    for(int i = x+1; i<=y; i++){
        int p; cin >> p;
        m.push_back(p);
        if(mn>p){
            mn = p;
            midx = m.size()-1;
        }
    }
    for(int i = y+1; i<=n; i++){
        int p; cin >> p;
        se.push_back(p);
    }

    // cout << midx <<"!\n";

    int seidx = 0;
    while(seidx<se.size() && se[seidx]<m[midx]){
        cout << se[seidx]<<" ";
        seidx++;
    }
    int cnt = 0;
    int mcnt = m.size();
    while(cnt<mcnt){
        cout << m[midx%mcnt] <<" ";
        midx++;
        cnt++;
    }
    while(seidx<se.size()){
        cout << se[seidx]<<" ";
        seidx++;
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