#include <iostream>
using namespace std;

#define MAX_N 100

int n, r, c;
int board[MAX_N+1][MAX_N+1];
int dr[4] = {-1,1,0,0};
int dc[4] = {0,0,-1,1};

inline bool InRange(int r, int c) {
    return r >= 1 && r <= n && c >= 1 && c <= n;
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> r >> c;
    // Caution!! index starts at 1.
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> board[i][j];
        }
    }
    int cur_r = r, cur_c = c;
    while (1) {
        //cout << "debug\n";
        cout << board[cur_r][cur_c] << ' ';  
        int tmp_cur_r = cur_r, tmp_cur_c = cur_c;

        for (int dir = 0; dir < 4; dir++) {
            int next_r = cur_r + dr[dir];
            int next_c = cur_c + dc[dir];
            if (InRange(next_r, next_c) == 0) continue;
            if (board[next_r][next_c] > board[cur_r][cur_c]) {
                cur_r = next_r;
                cur_c = next_c;
                break;
            }
        }

        if (tmp_cur_r == cur_r && tmp_cur_c == cur_c) break;
     
    }
    return 0;
}