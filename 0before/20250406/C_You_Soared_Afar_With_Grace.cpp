#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

int n;
int a[200001];
int b[200001];

int eq;
map<int, int> pr;
map<int, int> vti;
map<int, int> itv;
vector<pair<int, int>> ans;


void solve()
{
    eq = 0;
    pr.clear();
    vti.clear();
    itv.clear();
    ans.clear();

    cin >> n;
    for(int i = 1; i<=n; i++){
        cin >> a[i];
        vti[a[i]] = i;
        itv[i] = a[i];
    }
    bool imps = false;
    for(int i = 1; i<=n; i++){
        cin >> b[i];
        if(!pr.count(b[i])){
            pr[b[i]] = a[i];
            pr[a[i]] = b[i];
        }
        else if(pr[b[i]] != a[i]) imps = true;
        if(b[i] == pr[b[i]]){
            if(eq) eq = i;
            else imps = true;
        }
    }
    if(imps){
        cout << "-1\n";
        return;
    }
    if(!(n%2) && eq){
        cout << "-1\n";
        return;
    }

    if(n%2){
        int myv, myi, prv, pri;
        if(a[eq] == pr[a[eq]]){
            ans.push_back({n/2+1, vti[a[eq]]});
            prv = itv[n/2+1];
            pri = n/2+1;
            myv = a[eq];
            myi = vti[a[eq]];
            itv[pri] = myv;
            vti[prv] = myi;
            itv[myi] = prv;
            vti[myv] = pri;
        }
    }


    for(int i = 1; i<=n; i++){
        int myv, myi, prv, pri;
        myv = a[i];
        myi = vti[a[i]];
        prv = pr[a[i]];
        pri = vti[prv];
        if(myv == prv) continue;
        
        int tidx = min(myi, n-myi+1);
        if(tidx == min(pri, n-pri+1)) continue;
        
        if(myi > n/2){
            
        }
        else{

        }

        
    }



}
 
int main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}