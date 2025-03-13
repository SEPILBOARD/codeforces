#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
#define int long long int

int n;
int a1[200001];
int a2[200001];
set<int> s;

void solve()
{
    int sum1 = 0;
    int sum2 = 0;
    cin >> n;
    for(int i = 0; i<n; i++){
        cin >> a1[i];
        sum1 += a1[i];
        s.insert(a1[i]);
    }
    for(int i = 0; i<n; i++){
        cin >> a2[i];
        sum2 += a2[i];
        s.insert(a2[i]);
    }
    if(sum1 != sum2 && s.count(abs(sum1 - sum2)) == 0){
        if(sum1 > sum2){
            cout << sum1 - sum2 <<" ";
            for(int i = 0; i<n; i++) cout << a1[i] <<" " <<a2[i] << " ";
        }
        else{
            cout << sum2 - sum1 <<" ";
            for(int i = 0; i<n; i++) cout << a2[i] <<" " <<a1[i] << " ";
        }
        cout << "\n";
        return;
    }
    int idx = n;
    while(idx--){
        sum1 +=a2[idx] - a1[idx];
        sum2 +=a1[idx] - a2[idx];
        int temp = a1[idx];
        a1[idx] = a2[idx];
        a2[idx] = temp;

        if(sum1 != sum2 && s.count(abs(sum1 - sum2)) == 0){
            if(sum1 > sum2){
                cout << sum1 - sum2 <<" ";
                for(int i = 0; i<n; i++) cout << a1[i] <<" " <<a2[i] << " ";
            }
            else{
                cout << sum2 - sum1 <<" ";
                for(int i = 0; i<n; i++) cout << a2[i] <<" " <<a1[i] << " ";
            }
            cout << "\n";
            return;
        }
        else{
            sum1 +=a2[idx] - a1[idx];
            sum2 +=a1[idx] - a2[idx];
            int temp = a1[idx];
            a1[idx] = a2[idx];
            a2[idx] = temp;
        }
    }
}
 
signed main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}