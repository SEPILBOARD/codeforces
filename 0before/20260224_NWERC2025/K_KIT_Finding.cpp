#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int h, w, K, I, T;

char a[111][111];

int main()
{
    cin >> h >> w >> K >> I >> T;
    K--; I--; T--;
    a[1][1] = 'K';
    a[1][2] = 'I';
    a[1][3] = 'T';

    for(int i = 1; i<=h; i++){
        for(int j = 1; j<=w; j++){
            if(a[i][j] != NULL) continue;
            if(K){
                K--;
                a[i][j] = 'K';
            }
            else if(T){
                T--;
                a[i][j] = 'T';
            }
            else{
                I--;
                a[i][j] = 'I';
            }
        }
    }

    for(int i = 1; i<=h; i++){
        for(int j = 1; j<=w; j++){
            cout << a[i][j];
        }
        cout << "\n";
    }
}