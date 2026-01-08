#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

ll state, k;

void solve()
{
    cin >> state >> k;

    vector<int> a;
    while(state){
        a.push_back(state & 1);
        state >>= 1;
    }
    a.push_back(0);

    vector<pair<int, int>> carry;
    for(int i = 0; i<a.size(); i++){
        if(a[i] == 0){
            int cnt = 0;
            int j = i-1;
            while(j>=0 && a[j] == 1){
                cnt++;
                j--;
            }
            carry.push_back({cnt + 1, i});
        }
    }

    sort(carry.begin(), carry.end(), greater<>());
    ll ans = 0;
    for(int i = 0; i<carry.size() && i<k; i++){
        cout << carry[i].first <<", " <<carry[i].second << ' ';
        ans += carry[i].first;
    }
    cout << '\n';

    if(carry.size()<k){
        ans += (k-carry.size());
    }

    cout << ans-1 << '\n';
}

int main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}
