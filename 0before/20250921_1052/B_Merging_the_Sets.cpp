#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n, m;
int cnt[100'001];

void solve()
{
    cin >> n >> m;
    vector<vector<int>> s(n, vector<int>());
    
    for(int i = 0; i<n; i++){
        int l;
        cin >> l;
        for(int j = 0; j<l; j++){
            int si;
            cin >> si;
            s[i].push_back(si);
            cnt[si]++;
        }
    }
    
    int flag = 0;
    for(int i = 0; i<n; i++){
        bool f = true;
        for(int e: s[i]){
            if(cnt[e] <2){
                f = false;
                break;
            }
        }
        if(f){
            // cout << i <<"\n";
            flag++;
            if(flag>=2) break;
        }
    }

    for(int i = 1; i<=m; i++){
        // cout << i <<": " <<cnt[i] <<"\n";
        if(cnt[i] == 0){
            flag = 0;
            break;
        }
    }
    if(flag>=2) cout << "YES\n";
    else cout << "NO\n";
    memset(cnt, 0, sizeof(int)*(m+1));
}
 
signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}