#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

int n;
int a[1'050];

int idx[1'050];
vector<pair<int, int>> ans;

int cur = 1;

void move(int i, int j)
{
    ans.push_back({i, j});

    int x = a[i];
    int y = a[i+1];
    int z = a[i+2];

    for(int k = j; k+2<=n; k+=3){
        swap(a[k], x);
        swap(a[k+1], y);
        swap(a[k+2], z);

        idx[a[i]] = j;
        idx[a[i+1]] = j+1;
        idx[a[i+2]] = j+2;
    }
}

string dest ="";
set<string> v;

bool dfs(string s)
{
    v.insert(s);
    if(s == dest){
        return true;
    }

    string nxt = s.substr(3, 1)+s.substr(0, 3)+s.substr(4, 1);
    if(v.count(nxt) == 0){
        if(dfs(nxt)){
            ans.push_back({n-4, n-3});
            return true;
        }
    }
    nxt = s.substr(3, 2)+s.substr(0, 3);
    if(v.count(nxt) == 0){
        if(dfs(nxt)){
            ans.push_back({n-4, n-2});
            return true;
        }
    }

    nxt = s.substr(1, 3)+s.substr(0, 1)+s.substr(4, 1);
    if(v.count(nxt) == 0){
        if(dfs(nxt)){
            ans.push_back({n-3, n-4});
            return true;
        }
    }
    nxt = s.substr(0, 1)+s.substr(4, 1)+s.substr(1, 3);
    if(v.count(nxt) == 0){
        if(dfs(nxt)){
            ans.push_back({n-3, n-2});
            return true;
        }
    }

    nxt = s.substr(0, 1)+s.substr(2, 3)+s.substr(1, 1);
    if(v.count(nxt) == 0){
        if(dfs(nxt)){
            ans.push_back({n-2, n-3});
            return true;
        }
    }
    nxt = s.substr(2, 3)+s.substr(0,2);
    if(v.count(nxt) == 0){
        if(dfs(nxt)){
            ans.push_back({n-2, n-4});
            return true;
        }
    }

    return false;
}

int main()
{
    cin >> n;
    for(int i = 1; i<=n; i++){
        cin >> a[i];

        idx[a[i]] = i;
    }


    while(cur<=n-5){
        if(cur == a[cur]){
            cur++;
            continue;
        }

        if(idx[cur]==n || idx[cur]==n-1){
            move(n-2, n-4);
        }
        move(idx[cur], cur);
        cur++;
    }

    for(int i = n-4; i<=n; i++){
        dest.push_back('0'+(a[i]-n+4));
    }

    dfs("01234");

    cout << ans.size()<<"\n";
    for(auto[i, j]: ans){
        cout << i <<" " <<j <<"\n";
    }
}