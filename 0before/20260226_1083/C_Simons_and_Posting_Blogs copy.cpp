#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;



void solve()
{
    vector<char> v(1'000'001, 0);    

    int n;
    cin >> n;
    vector<vector<int>> a(n);
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
    
    sort(a.begin(), a.end());
    for(int i = 0; i<n; i++){
        for(int e: a[i]){
            if(!v[e]){
                v[e] = true;
                cout << e << " ";
            }
        }
    }
    cout << "\n";

    for(int i = 0; i<n; i++){
        for(int e: a[i]){
            cout << e << " ";
        }
        cout << "\n";
    }
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}