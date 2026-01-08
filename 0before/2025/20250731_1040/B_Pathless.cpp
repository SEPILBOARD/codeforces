#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

int n, s;
int cnt[3];

void solve()
{
    memset(cnt, 0, sizeof(cnt));
    cin >> n >> s;
    int sum = 0;
    for(int i = 0; i<n; i++){
        int e; cin >> e;
        cnt[e]++;
        sum += e;
    }

    if(sum+1 == s || sum>s){
        for(int i = 0; i<cnt[0]; i++) cout << "0 ";
        for(int i = 0; i<cnt[2]; i++) cout << "2 ";
        for(int i = 0; i<cnt[1]; i++) cout << "1 ";
        cout << "\n";
    }
    else cout << "-1\n";
}
 
int main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}