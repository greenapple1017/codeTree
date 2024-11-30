#include <iostream>
using namespace std;

#define MAX_N 100
#define MAX_M 100

int dr[4] = {0,1,0,-1};
int dc[4] = {1,0,-1,0};

int board[MAX_N][MAX_M];
int cnt = 1;

int n,m;

bool InRange(int r, int c) {
    return (r >= 0 && r < n && c >= 0 && c < m);
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> m;
    int cur_r, cur_c, next_r, next_c;
    cur_r = cur_c = 0;
    int dir = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            board[cur_r][cur_c] = cnt;
            cnt++;
            next_r = cur_r + dr[dir];
            next_c = cur_c + dc[dir];
            if (!InRange(next_r, next_c) || board[next_r][next_c] != 0) {
                // Caution!! not quotient, but remainder
                dir = (dir+1) % 4;
            }
            cur_r += dr[dir];
            cur_c += dc[dir];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << board[i][j] << ' ';
        }
        cout << '\n';
    }
    
    return 0;
}