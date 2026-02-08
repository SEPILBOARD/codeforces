#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

bool isp[300'001];
vector<int> prime;

int n;
int ans[300'001][40];

void solve()
{
    cin >> n;
    vector<int> a(n);
    vector<int> cnt(n+1);
    for(int i = 1; i<=n; i++){
        for(int j = 0; j<40; j++){
            ans[i][j] = -1;
        }
    }

    for(int i = 0; i<n; i++){
        cin >> a[i];
        cnt[a[i]]++;
    }

    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());
    
    for(int e: a){
        if(isp[e]){
            ll cur = e;
            for(int i = 1; i<=cnt[e]; i++){
                if(ans[e][i] == -1) ans[e][i] = i;
                else ans[e][i] = min(ans[e][i], i);

                cur *= e;
                if(e>n) break;
            }
        }
        else{
            for(int p: prime){
                if(p>e) break;

                int cur = e;
                int ccnt = 0;
                while(cur%p){
                    cur/=p;
                    ccnt++;
                }
                if(cur == 1){
                    ans[p][ccnt] = 1;
                    break;
                }
            }
            ans[e][1] = 1;
        }
    }

    for(int i = 1; i<=n; i++){
        int cur = i;
        int tans = 0;

        if(ans[i][1] != -1){
            cout << ans[i][1] <<" ";
            continue;
        }

        for(int j = 2; j*j <= cur; j++){
            int ccnt = 0;
            while(cur % j == 0){
                ccnt++;
                cur /= j;
            }
            if(ccnt == 0) continue;

            if(ans[j][ccnt] == -1){
                tans = -1;
                break;
            }

            tans += ans[j][ccnt]; 
        }
        if(tans !=-1 && cur>1){
            if(ans[cur][1] == -1){
                tans = -1;
                break;
            }
            tans += ans[cur][1]; 
        }
        cout << tans  <<" ";
    }
    cout << "\n";
}

signed main()
{
    FASTIO;
    for(int i = 1; i<=300'000; i++) isp[i] = true;
    isp[1] = false;
    for(ll i = 2; i<=300'000; i++){
        if(isp[i]){
            prime.push_back(i);
            for(ll j = i*i; j<=300'000; j+=i){
                isp[j] = false;
            }
        }
    }

    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}