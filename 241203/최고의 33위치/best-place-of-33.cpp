#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int board[25][25];
int n;
int ans = INT_MIN;

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> board[i][j];
        }
    }
    for (int i = 0; i <= n-3; i++) {
        for (int j = 0; j <= n-3; j++) {
            int num_coin = 0;
            for (int k1 = 0; k1 < 3; k1++) {
                for (int k2 = 0; k2 < 3; k2++) {
                    num_coin += board[i+k1][j+k2];
                }
            }
            ans = max(ans, num_coin);
        }
    }
    cout << ans;
    return 0;
}