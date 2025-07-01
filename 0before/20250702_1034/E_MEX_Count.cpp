#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

int n;
int a[200'001];

map<int, int> cnt;
vector<int> ov[200'002];

void solve()
{
    cnt.clear();
    for(int i = 0; i<=n; i++){
        ov[i].clear();
    }
    // memset(ov, 0, sizeof(ov));
    cin >> n;
    for(int i = 0; i<n; i++){
        cin >> a[i];
        cnt[a[i]]++;
        ov[cnt[a[i]]].push_back(a[i]);
    }

    int mex = 0;
    int tcnt = 0;
    for(int i = 0; i<=n; i++){
        if(cnt[i]){
            mex = i+1;
            tcnt += cnt[i]-1;
        }
        else break;
    }
    for(int i = mex; i<=n; i++){
        tcnt += cnt[i];
    }

    for(int k = 0; k<=n; k++){
        if(k>tcnt){
            cout << mex+1 - (k-tcnt) <<" ";
        }
        else{
            sort(ov[k+1].begin(), ov[k+1].end());
            cout << mex+1 - ((lower_bound(ov[k+1].begin(), ov[k+1].end(), mex) - ov[k+1].begin())) <<" ";
        }
    }

    cout << "\n";
    // cout << mex+1 - (lower_bound(ov[2].begin(), ov[2].end(), mex) - ov[2].begin());
    
}
 
int main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}