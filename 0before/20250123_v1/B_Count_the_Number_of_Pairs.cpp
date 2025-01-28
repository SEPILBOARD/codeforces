#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
 
int t;
 
void solve()
{
    int n, k; cin >> n >> k;
    string s;
    cin >> s;

    int cnt[26][2];
    memset(cnt, 0, sizeof(cnt));

    for(int i = 0; i<n; i++){
        //대문자자
        if(s[i] >=65 && s[i]<=90){
            cnt[s[i]-'A'][0] ++;
        }
        else{
            cnt[s[i]-'a'][1]++;
        }
    }
    int ans = 0;
    int cu = 0;
    for(int i = 0; i<26; i++){
        ans += min(cnt[i][0], cnt[i][1]);
        cu += abs(cnt[i][0] - cnt[i][1])/2;
    }
    cout << ans + min(cu, k) << "\n";
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