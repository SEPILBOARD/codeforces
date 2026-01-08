#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
 
int t;
 
void solve()
{
    int n; cin >> n;
    string s; cin >> s;
    vector<char> v;
    if(n == 1){
        cout<< "1\n";
        return;
    }
    else if(n==2){
        if(s[0] == s[1]){
            cout << "2\n";
            return;
        }
        else{
            cout<<"3\n";
            return;
        }
    }
    int ans = 1;
    v.push_back(s[0]);
    v.push_back(s[1]);
    for(int i = 2; i<n; i++){
        
        v.erase(unique(v.begin(), v.end()), v.end());
        ans += v.size();
        cout << v.size() <<" ";
        v.push_back(s[i]);
    }
    v.erase(unique(v.begin(), v.end()), v.end());
    ans += v.size();

    for(char e: v){
        cout << e <<" ";
    }
    cout << ans <<"\n";
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