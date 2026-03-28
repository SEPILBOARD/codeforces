#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n;
string s;

void solve()
{
    cin >> n;
    cin >> s;
    if(n == 1){
        cout << "NO\n";
        return;
    }

    int l = 0;
    int r = 1;
    int i = 0;
    while(i<n-1){
        if(s[i] == s[i+1]){
            l = i;
            r = i+1;
            while(0<=l && r<n){
                while(0<l && s[l] == '*') l--;
                if(s[l] != s[r]){
                    break;
                }
                s[l] = s[r] = '*';
                l--;
                r++;
            }
            i = r;
        }
        else{
            i++;
        }
    }
    for(int i = 0; i<n; i++){
        if(s[i] != '*'){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}