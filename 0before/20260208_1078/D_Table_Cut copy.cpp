#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n, m;

void solve()
{   
    cin >> n >> m;
    vector<vector<int> > psum(n+1, vector<int>(m+1, 0));
    int cnt = 0;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=m; j++){
            cin >> psum[i][j];
            cnt += psum[i][j];
        }
    }

    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=m; j++){
            psum[i][j] += psum[i][j-1] + psum[i-1][j] - psum[i-1][j-1];
        }
    }

    ll a = 0, b = 0;
    string ans = "";
    
    int i = 1, j = 1;
    while(i<=n && j<=m){
        int r = psum[n][j] - psum[n][j-1] - psum[i-1][j] + psum[i-1][j-1];
        int d = psum[i][m] - psum[i-1][m] - psum[i][j-1] + psum[i-1][j-1];

        ll rab = (a+r)*b;
        ll dab = a*(b+d);

        bool goR = true;

        if(rab == 0 && dab == 0){
            if(r<d) goR = true;
            else goR = false;
        }
        else{
            if(rab == dab){
                if(m-j>n-i) goR = true;
                else goR = false;
            }
            else if(rab>dab) goR = true;
            else goR = false;
        }

        if(goR){
            ans.push_back('R');
            a += r;
            j++;
        }
        else{
            ans.push_back('D');
            b += d;
            i++;
        }
    }

    cout << a*b <<"\n";
    cout << ans << "\n";
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}