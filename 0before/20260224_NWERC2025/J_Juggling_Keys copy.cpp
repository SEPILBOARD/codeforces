#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;


int n, k, q;
priority_queue<tuple<int, int, int, int>, vector<tuple<int, int, int, int>>, greater<>> pq;

bool chk[100'001];
bool ky[100'001];

signed main()
{
    FASTIO;
    cin >> n >> k >> q;

    for(int i = 0; i<q; i++){
        int p, l, r;
        cin >> p >> l >> r;
        pq.push({l, 0, p, i});
        pq.push({r, 1, p, i});
    }

    int cur = n;
    int curk = k;
    while(!pq.empty()){
        auto[t, io, p, i] = pq.top();
        pq.pop();

        if(io == 0){
            cur--;
            // chk[p] = true;
        }
        else{
            if(cur == 0){
                ky[i] = true;
            }
            cur++;
        }
    }

    for(int i = 0; i<q; i++){
        cout << ((ky[i])?'1':'0');
    }
    
    return 0;
}