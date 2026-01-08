#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

string s;

void solve() {
    cin >> s;
    int ycnt = 0;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == 'Y')
            ycnt++;
        if(ycnt > 1) {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

signed main() {
    FASTIO;
    int _tc;
    cin >> _tc;
    while(_tc--)
        solve();
    return 0;
}