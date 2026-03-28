#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;


char kit2[4] = {'I', 'T', 'K', 'T'};

int h, w, tK, tI, tT;

vector<pair<int, int>> kp;
vector<pair<int, int>> ip;
vector<pair<int, int>> tp;

char a[111][111];

int cK, cI, cT;

int main()
{
    cin >> h >> w >> tK >> tI >> tT;
    
    for(int c = 2; c<=h+w; c++){
        for(int i = 1; i<=h; i++){
            int j = c-i;
            if(j<1 || w<j) continue;
            
            int num = c%4;
            a[i][j] = kit2[num];
            if(num == 0){
                ip.push_back({i, j});
                cI++;
            }
            else if(num == 2){
                kp.push_back({i, j});
                cK++;
            }
            else if(num==1 || num == 3){
                tp.push_back({i, j});
                cT++;
            }
            else{
                assert(false);
            }
        }
    }

    a[1][2] = 'I';
    a[1][3] = 'T';

    


    for(int i = 1; i<=h; i++){
        for(int j = 1; j<=w; j++){
            cout << a[i][j];
        }
        cout << "\n";
    }
}