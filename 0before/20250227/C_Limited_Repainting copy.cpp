#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
#define int long long int


int n, k;
string s;
int a[300001];

struct Compare
{
    bool operator()(pair<int, int> a, pair<int, int> b)
    {
        if(a.first == b.first) return a.second < b.second;
        return a.first < b.first;
    }
};
priority_queue<pair<int, int>, vector<pair<int, int>>, Compare> pq;
int cur_p;

void solve()
{
    cin >> n >> k;
    cin >> s;
    cur_p = 0;
    for(int i = 0; i<n; i++){
        cin >> a[i];
        if(s[i] == 'B'){
            pq.push({a[i], i});
            cur_p = max(cur_p, a[i]);
        }
    }
    while(!pq.empty()){
        cout << pq.top().first <<" ";
        pq.pop();
    }

}
 
signed main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}