#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

int n;
bool alz;

void solve()
{
    vector<pair<int, int>> v;
    bool exz = false;
    int temp = 1;
    cin >> n;
    int a1, a2, a3, a4;
    for(int i = 1; i<=n-3; i++){
        cin >> a1;
        if(a1 == 0) exz = true;
    }
    cin >> a2 >> a3 >>a4;
    if(n>4){
        if(exz) a1=1;
        else a1 = 0;
        v.push_back({1, n-3});
    }

    int len = 4;
    if(!(a3 && a4)){
        v.push_back({3,4});
        len --;
    }

    if(!(a1 && a2)){
        v.push_back({1,2});
        len --;
    }

    v.push_back({1,len});
    cout << v.size() <<"\n";
    for(auto e: v){
        cout << e.first <<" " <<e.second <<"\n";
    }
}
 
int main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}