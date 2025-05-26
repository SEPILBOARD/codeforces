#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

void solve()
{
    int n, k;
    string s;

    cin >> n >> k;
    cin >> s;
    int cnt0 = 0;
    int cnt1 = 0;
    for(int i = 0; i<n; i++){
        if(s[i] == '0') cnt0++;
        else cnt1++;
    }

    if(abs(cnt1-cnt0)==2*k){
        cout << "YES\n";
        return;
    }
    else if(abs(cnt1-cnt0)>2*k){
        cout << "NO\n";
        return;
    }
    else{
        if((k-abs(cnt1-cnt0)/2)%2) cout << "NO\n";
        else cout << "YES\n";
    }
}
 
int main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}