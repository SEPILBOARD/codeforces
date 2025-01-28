#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

int t, n;
pair<int, int> range[200000];
vector<pair<int,int>> gatda;

void solved()
{
    cin >> n;
    for(int i = 0; i<n; i++){
        int a, b; cin >> a >> b;
        range[i] = make_pair(a,b);
        if(a == b){
            gatda.push_back(make_pair(i,a));
        }
    }
    for(int i = 0; i<n; i++){
        bool ex[200001] = {false};
        for(auto e: gatda){
            if(e.first == i) continue;
            if(e.second <range[i].first || e.second > range[i].second) continue;
            ex[e.second] = true;
        }
        int ans = 0;
        for(int j = range[i].first; j<=range[i].second; j++){
            if(!ex[j]){
                ans = 1;
                break;
            }
        }
        cout << ans;
    }
    cout << "\n";
    gatda.clear();
}

int main()
{
    FASTIO;
    cin >> t;
    while(t--){
        solved();
    }
    
    return 0;
}