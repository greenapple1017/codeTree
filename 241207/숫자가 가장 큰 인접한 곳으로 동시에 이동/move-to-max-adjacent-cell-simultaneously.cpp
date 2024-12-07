#include <iostream>
using namespace std;

#define MAX_N 20

int n, m, t;
int board[MAX_N+1][MAX_N+1]; 
int cnt[MAX_N+1][MAX_N+1];
int next_cnt[MAX_N+1][MAX_N+1];

int dr[4] = {-1,1,0,0};
int dc[4] = {0,0,-1,1};

inline bool InRange(int r, int c) {
    return r >= 1 && r <= n && c >= 1 && c <= n;
}

void Move() {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (cnt[i][j] == 1) {
                int max_next_r, max_next_c, local_mx = 0;
                for (int dir = 0; dir < 4; dir++) {
                    int next_r, next_c;
                    next_r = i + dr[dir];
                    next_c = j + dc[dir];
                    if (InRange(next_r, next_c) == 0) continue;
                    if (board[next_r][next_c] > local_mx) {
                        max_next_r = next_r;
                        max_next_c = next_c;
                    }
                }
                cnt[i][j] = 0;
                next_cnt[max_next_r][max_next_c]++;
            }
        }
    }
                    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (next_cnt[i][j] >= 2) {
                next_cnt[i][j] = 0;
            }
            cnt[i][j] = next_cnt[i][j];
        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> m >> t;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> board[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        int r, c;
        cin >> r >> c;
        cnt[r][c] = 1;
    }
    for (int i = 0; i < t; i++) {
        Move();
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (cnt[i][j] != 0) ans++;
        }
    }
    cout << ans;
    return 0;
}