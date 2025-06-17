#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

int n;
int a[41];
int b[41];
vector<pair<int, int>> ans;

void solve()
{
    ans.clear();
    cin >> n;
    for(int i = 1; i<=n; i++) cin >> a[i];
    for(int i = 1; i<=n; i++) cin >> b[i];


    for(int i = 1; i<=n; i++){
        if(a[i]<b[i]) continue;
        ans.push_back({3, i});
        swap(a[i], b[i]);
    }

    for(int i = 1; i<=n; i++){
        for(int j = 1; j+1<=n; j++){
            if(a[j]<a[j+1]) continue;
            ans.push_back({1, j});
            swap(a[j], a[j+1]);
        }
    }
    for(int i = 1; i<=n; i++){
        for(int j = 1; j+1<=n; j++){
            if(b[j]<b[j+1]) continue;
            ans.push_back({2, j});
            swap(b[j], b[j+1]);
        }
    }

    cout << ans.size() <<"\n";
    for(auto [x, y]: ans) cout << x << " " << y <<"\n";
}
 
int main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}