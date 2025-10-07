#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n, k;
string s;
char ans[200'001];

void solve()
{
    cin >> n >> k;
    cin >> s;

    if(n == k){
        for(int i = 0; i<n; i++) cout << "-";
        cout << "\n";
        return;
    }

    for(int i = 0; i<n; i++){
        ans[i] = '?';
    }

    int cnt0=0, cnt1=0, cnt2=0;
    for(int i = 0; i<k; i++){
        if(s[i] == '0') cnt0++;
        else if(s[i] == '1') cnt1++;
        else cnt2++; 
    }

    for(int i = 0; i<cnt0; i++) ans[i] = '-';
    for(int i = cnt0+cnt2; i<n-(cnt1+cnt2); i++) ans[i] = '+';
    for(int i = n-cnt1; i<n; i++) ans[i] = '-';
    
    for(int i = 0; i<n; i++) cout << ans[i];
    cout << "\n";
}
 
signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}