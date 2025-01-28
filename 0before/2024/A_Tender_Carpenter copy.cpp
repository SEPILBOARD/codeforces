#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

int t;
int a[200];

void solved()
{
    int cnt = 0;
    int n; cin >> n;
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    
    for(int i = 0; i<n; i++){
        cout << a[i] << " ";
    }
    cout <<": \n";

    for(int i =0; i<n-1; i++){
        if(a[0]*2 > a[i] && a[i+1]*2 > a[n-1]) cnt ++;
        if(cnt >=2){
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
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