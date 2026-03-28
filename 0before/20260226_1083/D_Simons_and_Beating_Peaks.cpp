#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

class Seg
{
    private:
        int n;
        vector<int> tree;
        
        void init(int n)
        {
            this->n = n;
            tree.resize(4*n);
        }

        void update(int node, int start, int end, int idx, int val)
        {
            if(idx<start || end<idx) return;
            if(start == end){
                tree[node] = max(tree[node], val);
                return;
            }

            int mid = start+end>>1;
            update(2*node, start, mid, idx, val);
            update(2*node+1, mid+1, end, idx, val);

            tree[node] = max(tree[2*node], tree[2*node+1]);
        }

        int query(int node, int start, int end, int left, int right)
        {
            if(end<left || right<start) return 0;
            if(left<=start && end<=right) return tree[node];

            int mid = start+end>>1;
            int l = query(2*node, start, mid, left, right);
            int r = query(2*node+1, mid+1, end, left, right);

            return max(l, r);
        }

    public:
        Seg(int n)
        {
            init(n);
        }

        void update(int idx, int val) {update(1, 1, n, idx, val);}
        int query(int left, int right) {return query(1, 1, n, left, right);}
};



void solve()
{
    int n;
    cin >> n;
    vector<int> a(n+1);
    vector<int> r(n+1, 0);

    for(int i = 1; i<=n; i++){
        cin >> a[i];
    }
    Seg seg(n);

    for(int i=n;i>=1;i--){
        int b = n + 1 - a[i];
        r[i] = seg.query(1, b-1) + 1;
        seg.update(b, r[i]);
    }

    int ans = 1e+9;
    vector<int> stk;
    for(int i = 1; i<=n; i++){
        // cout << i <<":\n";
        while(!stk.empty() && stk.back()<a[i]){
            // cout << stk.back() <<" ";
            stk.pop_back();
        }
        // cout << "\n";
        
        cout << i <<": " << (int)(i-1-stk.size())<<", " <<r[i] <<":" << (n-i+1-r[i]) <<"\n";
        // if(ans >(int)(i-1-stk.size()) + (n-i+1-r[i])) cout << i <<":\n";
        ans = min(ans, (int)(i-1-stk.size()) + (n-i+1-r[i]));
        stk.push_back(a[i]);
    }
    cout << ans << '\n';

    // for(int i = 1; i<=n; i++){
    //     cout << r[i] <<" ";
    // }
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}