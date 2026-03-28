#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

enum{R,G,B,X};
char rgb[3] = {'R','G','B'};
int r, g, b;

string ans = "";
vector<int> prv = {3, 3, 3, 3};

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

    if(r>=g && r>=b){
        while(r>0 && g>0){
            add(R);
            add(G);
        }
        while(r>0 && b>0){
            add(R);
            add(B);
        }
        if(r>0) add(R);
        if(prv[1]!=G && prv[3]!=G){
            while(g>0 && b>0){
                add(G);
                add(B);
            }
        }
        if(prv[1]!=B && prv[3]!=B){
            while(g>0 && b>0){
                add(B);
                add(G);
            }
        }
        if(prv[1]!=R && prv[3]!=R && r>0){
            add(R);
        }
    }

    else if(g>=r && g>=b){
        while(g>0 && r>0){
            add(G);
            add(R);
        }
        while(g>0 && b>0){
            add(G);
            add(B);
        }
        if(g>0) add(G);
        if(prv[1]!=R && prv[3]!=R){
            while(r>0 && b>0){
                add(R);
                add(B);
            }
        }
        if(prv[1]!=B && prv[3]!=B){
            while(r>0 && b>0){
                add(B);
                add(R);
            }
        }
        if(prv[1]!=G && prv[3]!=G && g>0){
            add(G);
        }
    }

    else{
        while(b>0 && r>0){
            add(B);
            add(R);
        }
        while(b>0 && g>0){
            add(B);
            add(G);
        }
        if(b>0) add(B);
        if(prv[1]!=R && prv[3]!=R){
            while(r>0 && g>0){
                add(R);
                add(G);
            }
        }
        if(prv[1]!=G && prv[3]!=G){
            while(g>0 && r>0){
                add(G);
                add(R);
            }
        }
        if(prv[1]!=b && prv[3]!=b && b>0){
            add(B);
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