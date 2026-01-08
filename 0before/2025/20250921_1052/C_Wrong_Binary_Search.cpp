#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n;
char s[200'001];
int ans[200'001];

void solve()
{
    cin >> n;
    for(int i = 1; i<=n; i++){
        cin >> s[i];
    }

    int idx = 1;
    bool flag = false;
    while(idx<=n){
        if(s[idx] == '1'){
            ans[idx] = idx;
            idx++;
        }
        else{
            int eidx = idx+1;
            while(eidx<=n && s[eidx] == '0'){
                eidx++;
            }
            // cout << eidx <<"\n";
            if(eidx-idx == 1){
                cout << "NO\n";
                return;
            }
            
            for(int i = idx; i<eidx; i++){
                ans[i] = eidx-i + idx-1;
            }
            idx = eidx;
        }
    }

    cout << "YES\n";
    for(int i = 1; i<=n; i++){
        cout << ans[i] <<" ";
    }
    cout <<"\n";
}
 
signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}