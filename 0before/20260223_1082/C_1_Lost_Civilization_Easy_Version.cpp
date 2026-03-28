#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n;
int a[300'001];
int p[300'001];

void solve()
{

    cin >> n;
    for(int i = 1; i<=n; i++) cin >> a[i];

    int ans = 0;
    vector<int> st;

    for(int i = 1; i<=n; i++){
        int x = a[i];

        if(st.empty()){
            ans++;
            st.push_back(x);
            continue;
        }

        while(!st.empty() && st.back() >= x) st.pop_back();

        if(!st.empty() && st.back() == x-1){
            st.push_back(x);
        }
        else{
            ans++;
            st.clear();
            st.push_back(x);
        }
    }

    cout << ans << "\n";
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}