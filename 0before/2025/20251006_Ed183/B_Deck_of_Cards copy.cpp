#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n, k;
string s;
char ans[200'001];

void solve()
{
    cin >> n >> k;
    cin >> s;

    if(n == k){
        for(int i = 0; i<n; i++){
            cout << "-";
        }
        cout << "\n";
        return;
    }

    for(int i = 0; i<n; i++){
        ans[i] = '+';
    }

    int lidx = 0;
    int ridx = n-1;
    int qlidx = 0;
    int qridx = n-1;
    for(int i = 0; i<k; i++){
        if(s[i] == '0'){
            ans[lidx] = '-';
            if(qlidx == lidx) qlidx++;
            lidx++;
        }
        else if(s[i] == '1'){
            ans[ridx] = '-';
            if(qridx == ridx) qridx--;
            ridx--;
        }
        else{
            if(qlidx<n) ans[qlidx++] = '?';
            if(qridx>=0) ans[qridx--] = '?';
        }
        // if(i == 1)cout << "ok\n"; return;
    }
    for(int i = 0; i<n; i++){
        cout << ans[i];
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