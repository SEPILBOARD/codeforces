#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n;

pair<int, int> ans[1'000'005];
priority_queue<int, vector<int>, greater<int>> pq;
map<int, int> cnt;

signed main()
{
    FASTIO;
    int m = 0;

    cin >> n;
    for(int q = 1; q<=n; q++){
        string s;
        int x;
        cin >> s;

        if(s[0] == 'i'){
            cin >> x;
            ans[m++] = {0, x};
            if(cnt[x]++ == 0) pq.push(x);
        }

        else if(s[0] == 'g'){
            cin >> x;
            
            if(pq.empty()){
                ans[m++] = {0, x};
                cnt[x]++;
                pq.push(x);

                ans[m++] = {1, x};
                continue;
            }

            int cur = pq.top();
            while(!pq.empty() && cur < x){
                
                ans[m++] = {2, cur};
                if(--cnt[cur] == 0){
                    pq.pop();
                    if(!pq.empty()){
                        cur = pq.top();
                    }
                }
            }

            if(pq.empty() || cur != x){
                ans[m++] = {0, x};
                cnt[x]++;
                pq.push(x);
            }

            ans[m++] = {1, x};
        }

        else{
            if(pq.empty()){
                ans[m++] = {0, 1};
                ans[m++] = {2, 1};
                continue;    
            }

            ans[m++] = {2, x};
            int cur = pq.top();
            if(--cnt[cur] == 0) pq.pop();
        }
    }
    

    cout << m <<"\n";
    for(int i = 0; i<m; i++){
        if(ans[i].first == 0) cout << "insert " << ans[i].second <<"\n";
        else if(ans[i].first == 1) cout << "getMin " << ans[i].second <<"\n";
        else cout << "removeMin\n";
    }
    return 0;
}