#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;

// enum{r,g,b};

int n;
char a[101];

int cnt[3];

long double dp[301][301][301];
bool v[301][301][301];

long double go(int r, int g, int b)
{
    long double &ret = dp[r][g][b];
    if(v[r][g][b]) return ret;

    long double Er = 1e+9;
    long double Eg = 1e+9;
    long double Eb = 1e+9;
    if(r!=0) Er = (3+go(r-1, g+1, b)+go(r-1, g, b+1))/2.0;
    if(g!=0) Eg = (3+go(r+1, g-1, b)+go(r, g-1, b+1))/2.0;
    if(b!=0) Eb = (3+go(r, g+1, b-1)+go(r+1, g, b-1))/2.0;

    ret = min(Er, min(Eg, Eb));
    v[r][g][b] = true;

    return ret;
}

int main()
{
    cout << fixed;
    cout.precision(7);

    cin >> n;
    for(int i = 0; i<n; i++){
        cin >> a[i];
        
        if(a[i] == 'r') cnt[0]++;
        if(a[i] == 'g') cnt[1]++;
        if(a[i] == 'b') cnt[2]++;
    }
    
    // for(int r = 0; r<=n; r++){
    //     for(int g = 0; g<=n-r; g++){
    //         for(int b = 0; b<=n-r-b; b++){
    //             dp[r][g][b] = -1;
    //         }
    //     }
    // }

    dp[n][0][0] = 0;
    dp[0][n][0] = 0;
    dp[0][0][n] = 0;
    v[n][0][0] = true;
    v[0][n][0] = true;
    v[0][0][n] = true;

    cout << go(cnt[0], cnt[1], cnt[2]);

    return 0;
}