#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n;
// char t[200'001];

void solve()
{
    cin >> n;
    string t;
    cin >> t;

    if(n == 1){
        cout << "YES\n";
        return;
    }

    if(n%2){
        if(t[0] == 'b'){
            cout << "NO\n";
            return;
        }
        else if(t[0] == '?'){
            t[0] = 'a';
        }
    }
    if(t[0] == '?' && t[1] == 'b'){
        t[0] = 'a';
    }

    int acnt = 0;
    int bcnt = 0;
    int qidx = -100;

    for(int i = 0; i<n; i++){
        if(t[i] == 'a'){
            acnt++;
            if(abs(acnt-bcnt)>=2){
                if(qidx == i-2){
                    qidx = -100;
                    bcnt++;
                }
                else{
                    cout <<"NO\n";
                    return;
                }
            }
        }
        else if(t[i] == 'b'){
            bcnt++;
            if(abs(acnt-bcnt)>=2){
                if(qidx == i-2){
                    qidx = -100;
                    acnt++;
                }
                else{
                    cout <<"NO\n";
                    return;
                }
            }
        }
        else{
            if(acnt+1 == bcnt){
                bcnt++;
                qidx = -100;
            }
            else if(acnt == bcnt+1){
                acnt++;
                qidx = -100;
            }
            else{
                qidx = i;
            }
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