#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

int t;

void solve()
{
    unordered_map<int, int> freq;
    int cnt = 0;
    int n, k; 
    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        int e; 
        cin >> e;
        if (freq[e] == 0) cnt++;
        freq[e]++;
    }

    vector<int> cntv;
    for (auto& [key, value] : freq) {
        cntv.push_back(value);
    }

    sort(cntv.begin(), cntv.end());
    int ans = 0;
    int usek = 0;
    for (int e : cntv) {
        usek += e;
        if (usek > k) break;
        ans++;
    }

    cout << max(cnt - ans, 1) << "\n";
}

int main()
{
    FASTIO;

    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
