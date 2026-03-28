#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n;
bool v[3'001];

void solve()
{
    cin >> n;
    vector<vector<int>> a(n);
    memset(v, false, sizeof(bool)*n);
    for(int i = 0; i<n; i++){
        int l;
        cin >> l;
        vector<int> temp(l);
        for(int j = 0; j<l; j++){
            cin >> temp[j];
        }
        set<int> s;
        for(int j = l-1; j>=0; j--){
            if(s.count(temp[j])) continue;
            s.insert(temp[j]);
            a[i].push_back(temp[j]);
        }
    }    
    
    set<int> s;
    for(int t = 0; t<n; t++){
        int mn = -1;
        vector<int> mnv;
        
        for(int i = 0; i<n; i++){
            if(v[i]) continue;

            vector<int> cur;
            for(int e: a[i]){
                if(s.count(e)) continue;
                cur.push_back(e);
            }
            if(mn == -1 || cur<mnv){
                mn = i;
                swap(mnv, cur);
            }
        }

        v[mn] = true;
        for(int e: mnv){
            cout << e << " ";
            s.insert(e);
        }
    }
    cout << "\n";
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}