#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

int n, k;

void solve()
{
    cin >> n >> k;
    string s; cin >> s;
    if(k == 0){
        int sidx = 0;
        int eidx = n-1;
        while(sidx<eidx){
            if(s[sidx]<s[eidx]){
                cout << "YES\n";
                return;
            }
            else if(s[sidx]>s[eidx]){
                cout << "NO\n";
                return;
            }
            sidx++;
            eidx--;
        }
        cout << "NO\n";
    }
    else{
        for(int i = 1; i<n; i++){
            if(s[i] != s[0]){
                cout << "YES\n";
                return;
            }
        }
        cout << "NO\n";
        return;
    }
}
 
int main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}