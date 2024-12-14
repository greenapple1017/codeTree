#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int n;
int board[10][10];
int visited_col[10];
int ans = INT_MIN;
int candi = INT_MAX;

void Select(int row) {
    if (row == n) {
        ans = max(ans, candi);
        return;
    }
    for (int col = 0; col < n; col++) {
        if (!visited_col[col]) {
            int tmp = candi;
            candi = min(candi, board[row][col]);
            visited_col[col] = 1;
            Select(row+1);
            visited_col[col] = 0;
            candi = tmp;
        }
    }
}
int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> board[i][j];
        }
    }
    Select(0);
    cout << ans;
    return 0;
}