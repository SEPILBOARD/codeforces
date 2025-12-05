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

    ll ans = 0;
    int curK = 0;
    vector<pair<int, int>> temp;
    while(curK < k){
        vector<pair<int, int>> carry;
        for(int i = 0; i<a.size(); i++){
            if(a[i] == 0){
                int cnt = 0;
                int j = i-1;
                while(j>=0 && a[j] == 1){
                    cnt++;
                    j--;
                }
                carry.push_back({cnt, i});
            }
        }

        if(carry.size() <= 1){
            temp = carry;
            break;
        }

        sort(carry.begin(), carry.end(), greater<>());
        ans += carry[0].first;
        int j = carry[0].second-1;
        a[carry[0].second] = 1;
        while(j>=0 && a[j]==1){
            a[j] = 0;
            j--;
        }
        
        curK--;
    }

    ans += temp[0].first;
    ans += k-curK;

    cout << ans-1 << '\n';
}

int main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}
