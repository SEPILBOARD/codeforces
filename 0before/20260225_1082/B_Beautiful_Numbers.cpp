#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

string s;

void solve()
{
    cin >> s;

    int n = s.length();
    int s0 = s[0]-'0';
    sort(s.begin(), s.end());

    int sum = 0;
    for(int i = 0; i<n; i++){
        int cur = s[i]-'0';
        sum += cur;

        if(sum>=10){
            int prv = s[i-1]-'0';
            if(prv<s0 && sum-cur == 9){
                s.erase(s.begin()+i, s.begin()+i+1);
                s.push_back('1');
                sort(s.begin(), s.end());

                sum = 0;
                for(int j = 0; j<n; j++){
                    cur = s[j]-'0';
                    sum += cur;
                    if(sum>=10){
                        cout << n-j+1 <<"\n";
                        return;
                    }
                }

            }
            else{
                cout << n-i <<"\n";
                return;
            }
        }
    }
    cout << "0\n";

}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}