#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> makeSpiral(int n) {
    vector<vector<int>> a(n, vector<int>(n));
    int top = 0, bottom = n - 1;
    int left = 0, right = n - 1;
    int cur = n * n - 1;                 // 가장 큰 값부터 시작

    while (top <= bottom && left <= right) {
        // 1) 위쪽 행: 왼 → 오
        for (int col = left; col <= right; col++) {
            a[top][col] = cur--;
        }
        top++;

        // 2) 오른쪽 열: 위 → 아래
        for (int row = top; row <= bottom; row++) {
            a[row][right] = cur--;
        }
        right--;

        // 3) 아래쪽 행: 오 → 왼
        if (top <= bottom) {
            for (int col = right; col >= left; col--) {
                a[bottom][col] = cur--;
            }
            bottom--;
        }

        // 4) 왼쪽 열: 아래 → 위
        if (left <= right) {
            for (int row = bottom; row >= top; row--) {
                a[row][left] = cur--;
            }
            left++;
        }
    }
    return a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;                       // 원하는 크기 입력
    auto grid = makeSpiral(n);

    for (auto& row : grid) {
        for (int x : row) cout << x << ' ';
        cout << '\n';
    }
    return 0;
}
