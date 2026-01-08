#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

int n, k;
string s;

void solve()
{
    cin >> n >> k;
    cin >> s;
    
    if(n/2<k) cout << "Alice\n";
    else{
        int cnt = 0;
        for(int i = 0; i<n; i++){
            cnt += (s[i] == '1');
        }
        if(cnt <= k) cout << "Alice\n";
        else cout << "Bob\n";
    }
}
 
int main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}