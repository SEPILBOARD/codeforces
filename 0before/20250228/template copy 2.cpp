#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>

using namespace std;

bool is_sqr(int n) {
    int root = sqrt(n);
    return root * root == n;
}

bool canp(vector<int>& p) {
    int sum = 0;
    set<int> s;
    for (int num : p) {
        sum += num;
        if (s.count(sum) || is_sqr(sum)) {
            return false;
        }
        s.insert(sum);
    }
    return true;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; ++i) {
        p[i] = i + 1;
    }
    
    do {
        if (canp(p)) {
            for (int num : p) {
                cout << num << " ";
            }
            cout << "\n";
            return;
        }
    } while (next_permutation(p.begin(), p.end()));
    
    cout << "-1\n";
}

int main() {
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
