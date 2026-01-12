#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n, k;
set<int> s;

void solve()
{
    s.clear();

    cin >> n >> k;
    
    queue<pair<int, int>> q;
    q.push({n, 0});
    while(!q.empty()){
        auto[cur, d] = q.front();
        q.pop();

        if(cur == k){
            cout << d <<"\n";
            return;
        }

        if(s.count(cur/2) == 0){
            q.push({cur/2, d+1});
            s.insert(cur/2);
        }
        if(cur%2 == 1 && s.count(cur/2+1) == 0){
            q.push({cur/2+1, d+1});
            s.insert(cur/2+1);
        }
    }

    cout << "-1\n";
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}