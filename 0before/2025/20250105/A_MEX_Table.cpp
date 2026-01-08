#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

int t;

void solved()
{
    int n, m; cin >> n >> m;
    cout << max(n, m) + 1 << "\n";
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