#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n;

void solve()
{
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    
    if(is_sorted(a.begin(), a.end())){
        cout << "Bob\n";
        return;
    }

    vector<int> pf(n); 
    for(int i = 0; i<n; i++){
        int cur = a[i];
        bool flag = false;
        for(int p = 2; 1LL*p*p<=cur; p++){
            if(cur%p == 0){
                pf[i] = p;
                while(cur%p == 0){
                    cur /= p;
                }
                if(cur>1){
                    cout << "Alice\n";
                    return;
                }
            }
        }
        if(cur>1){
            pf[i] = cur;
        }
    }

    if(is_sorted(pf.begin(), pf.end())){
        cout << "Bob\n";
    }
    else{
        cout << "Alice\n";
    }
}

signed main()
{
    FASTIO;

    // fill(isPrime, isPrime+1'000'001, true);
    // for(int i = 2; 1LL*i*i<=1'000'000; i++){
    //     if (!isPrime[i]) continue;
    //     for (int j = i * i; j<=1'000'000; j+=i){
    //         isPrime[j] = false;
    //     }
    // }

    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}