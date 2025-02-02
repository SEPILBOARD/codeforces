#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
#define int long long int

int t;
 
void solve()
{
    int n; cin >> n;
    int a[200000];
    int sum = 0;
    int curmad = 0;
    set<int> s;
    vector<int> v;
    for(int i = 0; i<n; i++){
        cin >> a[i];
        sum += a[i];
        if(s.find(a[i]) != s.end()){
            if(curmad < a[i]){
                v.push_back({i});
                curmad = a[i];
            }
        }
        else s.insert(a[i]);
    }
    int st = -1;
    if(!v.empty()) st=v[0];
    for(int i = 1; i<v.size(); i++){
        int ed = v[i];
        int cnt = ed - st;
        sum += a[st] * cnt*(cnt+1)/2;
        st = ed;
        for(int e: v){
            sum += cnt * a[e];
        }
    }
    if(st == -1) cout << sum <<"\n";
    else{
        int cnt = n - st;
        sum += a[st] * cnt*(cnt+1)/2;
        cout << sum <<"\n";
    }
}

signed main()
{
    FASTIO;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}