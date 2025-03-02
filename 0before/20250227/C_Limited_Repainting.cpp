#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

int n, k;
string s;
int a[300001];
vector<int> v;

void solve()
{
    priority_queue<int> pq;
    v.clear();
    int ans = 0;
    cin >> n >> k;
    cin >> s;
    int cnt = 0;
    for(int i = 0; i<n; i++){
        cin >> a[i];
        if(s[i] == 'B') pq.push(a[i]);
        cnt++;
    }

    bool cur_R = true;
    if(s[0] == 'R') cur_R = true;
    else cur_R = false;
    int cur_m = 0;
    for(int i = 0; i<n; i++){
        if(cur_R){
            if(a[i] == 'B'){
                v.push_back(cur_m);
                cur_R = false;
                cur_m = a[i];
            }
            else{
                cur_m = max(cur_m, a[i]);
            }
        }
        else{
            if(a[i] == 'R'){
                v.push_back(cur_m);
                cur_R = true;
            }
            else{
                cur_m += a[i];
            }
        }
    }
    v.push_back(cur_m);

    
}
 
signed main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}