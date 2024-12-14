#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int board[10][10];
int visited_col[10];

int n;
int ans = INT_MIN;
int tmp;

// k는 현재 색칠된 칸의 개수, row는 현재 행
void f(int k, int row) {
    if (k == n) {
        ans = max(ans, tmp);
        return;
    }
    for (int i = 0; i < n; i++) {
        if (!visited_col[i]) {
            tmp += board[row][i];
            visited_col[i] = 1;
            f(k+1, row+1);
            visited_col[i] = 0;
            tmp -= board[row][i];
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
    f(0,0);
    cout << ans;
    return 0;
}