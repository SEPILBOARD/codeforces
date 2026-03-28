#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n;
map<string, int> ntoi;
vector<string> iton;
int idx = 0;

int freq[1'001];
int rfreq[1'001][11];

int main()
{
    cin >> n;
    for(int i = 0; i<n; i++){
        for(int j = 1; j<=10; j++){
            string s;
            cin >> s;

            if(ntoi.count(s)==0){
                ntoi[s] = idx++;
                iton.push_back(s);
            }

            int cur = ntoi[s];

            freq[cur]++;
            rfreq[cur][j]++;
        }
    }

    int mx = 0;

    vector<int> ans;
    for(int i = 0; i<idx; i++){
        if(freq[i]>mx){
            mx = freq[i];
            ans.clear();
            ans.push_back(i);
        }
        else if(freq[i]==mx){
            ans.push_back(i);
        }
    }

    int rnk = 1;
    while(ans.size() > 1 && rnk<=10){
        mx = 0;
        vector<int> tans;
        for(int i: ans){
            if(rfreq[i][rnk]>mx){
                mx = rfreq[i][rnk];
                tans.clear();
                tans.push_back(i);
            }
            else if(rfreq[i][rnk]==mx){
                tans.push_back(i);
            }
        }

        rnk++;
        ans = tans;
    }

    if(ans.size() == 1){
        cout << iton[ans[0]];
    }
    else{
        cout << "tie";
    }
    // cout<<"\n" << ans.size() <<" " <<rnk;

    return 0;
}