#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

enum{R,G,B};
char rgb[3] = {'R','G','B'};
int r, g, b;

string ans = "";
vector<int> prv = {-1, -1, -1, -1};

void add(int x)
{
    swap(prv[2], prv[3]);
    swap(prv[1], prv[2]);
    prv[1] = x;

    if(x == R) r--;
    else if(x == G) g--;
    else if(x == B) b--;
    else assert(false);

    ans.push_back(rgb[x]);
}

void solve()
{
    cin >>r >> g >> b;

    ans = "";
    prv = {-1,-1,-1,-1};

    while(true){
        if(r == 0 || g == 0 || b == 0) break;
        if(r == g && g == b) break;
        //R
        if(r>=g && r>=b){
            if(prv[1]!=R && prv[3]!=R){
                add(R);
            }   
            else{
                if(g==0 && b==0) break;
                if(g>=b && prv[1]!=G && prv[3]!=G){
                    add(G);
                }
                else{
                    add(B);
                }
            }
        }
        //G
        else if(g>=r && g>=b){
            if(prv[1]!=G && prv[3]!=G){
                add(G);
            }   
            else{
                if(r==0 && b==0) break;
                if(r>=b && prv[1]!=R && prv[3]!=R){
                    add(R);
                }
                else{
                    add(B);
                }
            }
        }
        //B
        else{
            if(prv[1]!=B && prv[3]!=B){
                add(B);
            }   
            else{
                if(r==0 && g==0) break;
                if(r>=g && prv[1]!=R && prv[3]!=R){
                    add(R);
                }
                else{
                    add(G);
                }
            }
        }
    }

    if(r == 0){
        
    }
    else if(g == 0){

    }
    else if(b == 0){

    }

    if(r!=0 && r==g && g==b){
        int n = r;
        if(prv[2] == -1){
            
        }
        for(int i = 0; i<n; i++){
            add(prv[2]);
            add(prv[2]);
            add(prv[2]);
        }
    }

    cout << ans <<"\n";
}

signed main()
{
    FASTIO;
    int _tc; cin >> _tc;
    while (_tc--) solve();
    return 0;
}