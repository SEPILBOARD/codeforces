#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
#define lli long long int
 
int t;
 
void solve()
{
    int n; cin >> n;
    map<int, int> a;
    vector<pair<int,int>> len;
    vector<int> x;
    for(int i = 0; i<n; i++){
        int e; cin>> e;
        a[e] +=1;
    }
    for(auto e : a){
        if(e.second > 1) x.push_back(e.first);
        len.push_back({e.first,e.second});
    }
    sort(len.begin(), len.end());
    int lesiz = len.size();
    for(int e: x){
        for(int i =0; i<lesiz; i++){
            if(len[i].second > 1){
                if(len[i].first != e){
                    cout << e << " " << e <<" "<<len[i].first << " " <<len[i].first << "\n";
                    return;
                }
                else if(len[i].second > 3){
                    cout << e << " " << e <<" " << e << " " << e <<"\n";
                    return;
                }
            }
            if(i != 0 && i !=lesiz-1){
                if(len[i].first - len[i-1].first < 2*e){
                    if(len[i-1].first == e && a[e]<3) continue;
                    if(len[i].first == e && a[e]<3) continue;
                    cout << e << " " << e << " " << len[i-1].first << " " << len[i].first << "\n";
                    return;
                }
            }
        }
    }
    cout << "-1\n";
    return;
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