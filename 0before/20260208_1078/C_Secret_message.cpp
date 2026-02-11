#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n, k;
string s[50'001];
bool ext[50'001][27];

void solve()
{
    cin >> n >> k;
    for(int i = 0; i<n; i++){
        memset(ext[i], false, sizeof(ext[i]));
    }
    for(int i = 0; i<k; i++){
        cin >> s[i];
    }

    for(int i = 0; i<k; i++){
        for(int j = 0; j<n; j++){
            ext[j][s[i][j]-'a'] = true;
        }
    }

    int ans = n;
    vector<char> o(n);
    for(int d = 1; d<=n; d++){
        if(n%d) continue;
        bool tot = true;

        for(int s = 0; s<d; s++){
            bool curS = false;

            for(int a = 0; a<26; a++){
                bool curA = true;
                
                for(int i = s; i<n; i+=d){
                    if(!ext[i][a]){
                        curA = false;
                        break;
                    }
                }

                if(curA){
                    curS = true;
                    o[s] = 'a'+a;
                    break;
                }
            }

            if(!curS){
                tot = false;
                break;
            }
        }

        if(tot){
            ans = d;
            break;
        }
    }

    for(int r = 0; r<n/ans; r++){
        for(int i = 0; i<ans; i++){
            cout << o[i];
        }
    }
    cout << "\n";
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}