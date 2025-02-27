#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

int n;
int a[2001];

void solve()
{
    cin >> n;
    for(int i = 1; i<=n; i++){
        cin >> a[i];
    }

    int ans_cnt = 0;
    int ansl = 1, ansr = 1;
    for(int i = 1; i<=n-1; i++){
        int tl = i, tr = i;
        int tcnt = 0;
        int cur = 0;
        for(int j = i+1; j<=n; j++){
            if(a[i]>a[j]) cur++;
            else if(a[i]<a[j]) cur--;
            if(cur>tcnt){
                tcnt = cur;
                tr = j;
            }
        }
        if(tcnt > ans_cnt){
            ans_cnt = tcnt;
            ansl = tl;
            ansr = tr;
        }
        // cout << "i: "<< i <<", " << ans_cnt<<"\n";
    }
    cout << ansl <<" " <<ansr <<"\n";
}
 
int main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}