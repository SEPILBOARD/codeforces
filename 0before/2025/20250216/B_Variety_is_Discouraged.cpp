#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

int a[200001];
map<int, int> cnt;

void solve()
{
    cnt.clear();
    int n; cin >> n;
    for(int i =1; i<=n; i++){
        cin >> a[i];
        cnt[a[i]]++;
    }

    int sidx = 0;
    for(int i = 1; i<=n; i++){
        if(cnt[a[i]] == 1){
            sidx = i;
            break;
        }
    }
    if(sidx == 0){
        cout << "0\n";
        return;
    }

    int as = sidx; int ae = sidx;
    for(int i = sidx+1; i<=n; i++){
        if(cnt[a[i]] == 1){
            if(ae-as < i-sidx){
                as = sidx;
                ae = i;
            }
        }
        else{
            sidx = i+1;
        }
    }
    cout << as <<" " <<ae <<"\n";
}
 
int main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}