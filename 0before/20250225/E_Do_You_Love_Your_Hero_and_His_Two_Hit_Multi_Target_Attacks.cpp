#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
int k;

void solve()
{
    cin >> k;
    int cnt = 1;
    while(true){
        int temp = cnt*(cnt-1)/2;
        if(k<temp) break;
        cnt++;
    }
    cnt--;

    cout << cnt + max(0, k-(cnt*(cnt-1)/2)+1) <<"\n";
    int x = 0, y = 0;
    for(int i = 0; i<cnt; i++){
        cout << x <<" " <<y <<"\n";
        x++;
    }
    x = -1, y =-1;
    for(int i = 0; i<k-(cnt*(cnt-1)/2)+1; i++){
        cout << x <<" " <<y <<"\n";
        if(x==y) x--;
        else y--;
    }
}
 
int main()
{
    FASTIO;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}