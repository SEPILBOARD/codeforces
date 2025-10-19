#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n;
bool isnp[200'005];
vector<int> p;

int a[200'005];
int b[200'005];
ll fcost[17984];
ll scost[17984];

bool v[200'001];
bool va[200'001];

vector<int> lp;
void primeFtz(int x)
{
    va[x] = true;
    for(int e: p){
        if(x%e == 0){
            if(!v[e]){
                lp.push_back(e);
                v[e] = true;
                va[e] = true;
            }
            while(x%e == 0){
                x/=e;
                va[x] = true;
            }
            if(!isnp[x]){
                if(!v[x]){
                    lp.push_back(x);
                    v[x] = true;
                    va[x] = true;
                }
                return;
            }
        }
    }
    return;
}

void solve()
{
    cin >> n;
    // lp.push_back(2);
    for(int i = 0; i<n; i++){
        cin >> a[i];
        // if(!va[a[i]]) primeFtz(a[i]);
    }
    for(int i = 0; i<n; i++) cin >> b[i];

    // if(lp.size() == 0){
    //     int cnt1 = 0;
    //     for(int i = 0; i<n; i++){
    //         if(a[i]%2 == 0) cnt1++;
    //     }
    //     if(cnt1 == 0) cout << "2\n";
    //     else if(cnt1 == 1) cout << "1\n";
    //     else cout << "0\n";
    //     return;
    // }
    
    for(int i = 0; i<5000; i++){
        fcost[i] = 1e+18;
        scost[i] = 1e+18;
    }

    ll ans = 1e+18;
    for(int j = 0; j<5000; j++){
        for(int i = 0; i<n; i++){
            ll cost = 1LL * ((p[j]-(a[i]%p[j]))%p[j])*b[i];

            if(cost<fcost[j]){
                scost[j] = fcost[j];
                fcost[j] = cost;
            }
            else if(cost<scost[j]){
                scost[j] = cost;
            }
        }

        ans = min(ans, fcost[j]+scost[j]);
        if(fcost[j] == 0 && scost[j] == 0) break;
    }

    cout << ans <<"\n";
}

signed main()
{
    FASTIO;
    isnp[1] = true;
    for(int i = 2; i <= 200'000; i++){
        if(!isnp[i]){
            p.push_back(i);
            for(int k = i * 2; k <= 200'000; k += i){
                isnp[k] = true;
            }
        }
    }
    // cout << p.size() <<"\n";
    
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}