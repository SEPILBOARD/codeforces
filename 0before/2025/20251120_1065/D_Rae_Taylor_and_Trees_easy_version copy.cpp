#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n, x;

void solve()
{
    stack<stack<int>> st;
    st.push(stack<int>());

    cin >> n;
    cin >> x;
    st.top().push(x);
    for(int i = 1; i<n; i++){
        cin >> x;
        if(st.top().top()<x){
            st.top().push(x);
        }
        else{
            st.push(stack<int>());
            st.top().push(x);
        }
    }

    int prevTop = st.top().top();
    st.pop();
    int curTop = 0;

    while(!st.empty()){
        if(st.empty()) break;

        curTop = st.top().top();
        int curMin = 1e+9;
        while(!st.top().empty()){
            curMin = min(st.top().top(), curMin);
            st.top().pop();
        }

        if(curMin > prevTop) break;

        st.pop();
        prevTop = max(prevTop, curTop);
    }

    if(st.empty()) cout << "Yes\n";
    else cout << "No\n";
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}