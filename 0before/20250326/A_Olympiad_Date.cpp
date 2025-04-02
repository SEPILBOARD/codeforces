#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

int n;
int cnt[10];

void solve()
{
    memset(cnt, 0, sizeof(cnt));
    cin >> n;
    int ans = 1;
    bool flag = false;
    for(int i = 0; i<n; i++){
        int e; cin >> e;
        cnt[e]++;
        if(cnt[0]>=3 && cnt[1]>=1 && cnt[2]>=2 && cnt[3] >=1 && cnt[5]>=1){
            flag = true;
        }
        if(!flag){
            ans++;
        }
    }
    if(flag) cout << ans <<"\n";
    else cout << "0\n";
}
 
int main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}