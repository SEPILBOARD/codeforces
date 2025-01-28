#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

int t;
int a[200];

void solved()
{
    int cnt = 0;
    int n; cin >> n;
    cin >> a[0];
    cin >> a[1];
    if(a[0]*2>a[1])
    {
        cout << "YES\n";
        return;
    }
    for(int i = 2; i<n; i++){
        cin >> a[i];
        int srt[3];
        srt[0] = a[i-2]; a[]
        if(a[i-2]+a[i-1] > a[i])
    }
    
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