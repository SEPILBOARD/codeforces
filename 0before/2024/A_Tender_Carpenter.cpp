#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

int t;
int a[200];

void solved()
{
    int n; cin >> n;
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }

    for(int i = 0; i<n-1; i++){
        int s = min(a[i],a[i+1]);
        int b = max(a[i],a[i+1]);
        if(s*2>b){
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