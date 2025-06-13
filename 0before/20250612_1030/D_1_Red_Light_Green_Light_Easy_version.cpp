#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
#define int long long int

int n ,k;
int p[501];
int d[501];

int q;
int a[501];

void solve()
{
    cin >> n >> k;
    for(int i = 0; i<n; i++) cin >> p[i];
    for(int i = 0; i<n; i++) cin >> d[i];
    cin >> q;
    for(int i = 0; i<q; i++) cin >> a[i];

    for(int i = 0; i<q; i++){
        int x = a[i];
        bool r = true;
        int cnt = 0;
        int t = 0;  
        while(cnt<=10){
            int next = lower_bound(p, p+n, a[i]) - p;
            if(p[next] == x) next++;

            cout << t<< ": " << x <<"\n";

            for(int j = next; j<n; j++){
                if((p[j]-x+t)%k == d[j]){
                    t += p[j]-x;
                    x = p[j];
                    r = false;
                    break;
                }
            }
            if(r){
                break;
            }

            next = lower_bound(p, p+n, a[i]) - p;
            if(p[next] == x) next--;

            cout << t<< ": " << x <<"\n";

            for(int j = next; j>=0; j--){
                if((x-p[j]+t)%k == d[j]){
                    t += x-p[j];
                    x = p[j];
                    r = true;
                    break;
                }
            }
            if(!r) break;
            cnt++;
            
        }

        if(cnt<=10) cout << "YES\n";
        else cout << "NO\n";
    }
}
 
signed main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}