#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

int n;
int a[200'001];
queue<int> idxs[200'001];

void solve()
{
    cin >> n;
    for(int i = 1; i<=n; i++) idxs[i] = queue<int>();
    for(int i = 0; i<n; i++){
        cin >> a[i];
        idxs[a[i]].push(i);
    }

    int ans = 1;
    int sidx = 0;
    int eidx = 0;
    while(sidx < n){
        int nidx = 0;
        for(int i = sidx; i<=eidx; i++){
            idxs[a[i]].pop();
            if(idxs[a[i]].empty()){
                cout << ans <<"\n";
                return;
            }
            nidx = max(nidx, idxs[a[i]].front());
        }
        sidx = eidx+1;
        eidx = nidx;
        ans++;
    }
    cout << ans <<"\n";
}
 
int main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}