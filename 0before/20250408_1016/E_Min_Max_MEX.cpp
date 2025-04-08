#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
using namespace std;
#define int long long int

int n, k;
int a[200001];

void solve()
{
    cin >> n >> k;
    for(int i = 0; i < n; i++) cin >> a[i];

    vector<int> cnt(n + 2, 0);
    for(int i = 0; i < n; i++){
        if(a[i]<n+2) cnt[a[i]]++;
    }
    int mx = 0;
    for(; mx < cnt.size(); mx++){
        if(cnt[mx] < k) break;
    }
    int lo = 0, hi = mx + 1;
    while(lo + 1 < hi){
        int mid = lo + hi >> 1;
        bool flag = false;
        int seg = 0, ncnt = 0;
        
        vector<bool> chk(mid, false);
        for(int i = 0; i < n; i++){
            int cur = a[i];
            if(cur < mid && !chk[cur]){
                chk[cur] = true;
                ncnt++;
            }
            if(ncnt == mid){
                seg++;
                if(seg == k){ break; }
                fill(chk.begin(), chk.end(), false);
                ncnt = 0;
            }
        }
        flag = (seg >= k);

        if(flag) lo = mid;
        else hi = mid;
    }
    cout << lo << "\n";
}
 
signed main(){
    FASTIO;
    int t; 
    cin >> t;
    while(t--){ solve(); }
    return 0;
}
