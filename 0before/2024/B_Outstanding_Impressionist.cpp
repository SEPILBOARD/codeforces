#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

int t, n;
pair<int, int> range[200001];


void solved()
{
    int onlyone[200001] ={0,};
    memset(onlyone, 0, sizeof(onlyone));
    bool ex[200001] = {false};
    cin >> n;
    for(int i = 1; i<=n; i++){
        int a, b; cin >> a >> b;
        range[i] = make_pair(a,b);
        if(a == b){
            if(onlyone[a] == 0){
                onlyone[a] = i;
            }
            else{
                ex[a] = true;
            }
        }
    }
    for(int i = 1; i<=n; i++){
        int ans = 1; 
        for(int j = range[i].first; j<=range[i].second; j++){
            if(onlyone == 0){
                ans = 1;
                break;
            }
            else{
                if(ex[j]){
                    ans = 0;
                    continue;
                }
                else if(onlyone[j] != i){
                    ans =0;
                    continue;
                }
                else{
                    ans = 1;
                    break;
                }
            }
        }
        cout << ans;
    }
    cout << "\n";
}

int main()
{
    FASTIO;
    cin >> t;
    while(t--){
        solved();
    }
    
    return 0;
}