#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

vector<int> ghf;
vector<int> Wkr;

void solve()
{
    ghf.clear();
    Wkr.clear();
    int n; cin >> n;
    for(int i = 1; i<=n; i++){
        int e; cin >> e;
        if(i%2) ghf.push_back(e);
        else Wkr.push_back(e);
    }

    sort(ghf.begin(), ghf.end());
    sort(Wkr.begin(), Wkr.end());

    for(int i = 0; i< Wkr.size(); i++){
        cout << ghf[i] << " ";
        cout << Wkr[i] <<" ";
    }
    if(n%2) cout << ghf.back();
    cout << "\n";
}
 
int main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}