#include <iostream>
#include <queue>
using namespace std;

int ans;
int board[105][105];
int visited[105][105];
int n, k;

struct Point{
    int r;
    int c;
};

queue<Point> q;

int dr[4] = {-1,0,1,0};
int dc[4] = {0,1,0,-1};

inline bool InRange(int r, int c) {
    return r >= 0 && r < n && c >= 0 && c < n;
}

void Bfs() {
    while (!q.empty()) {
        int cur_r = q.front().r;
        int cur_c = q.front().c;
        q.pop();
        for (int dir = 0; dir < 4; dir++) {
            int nr = cur_r + dr[dir];
            int nc = cur_c + dc[dir];
            if (!InRange(nr, nc) || board[nr][nc] == 1 || visited[nr][nc])
                continue;
            q.push({nr,nc});
            visited[nr][nc] = 1;
            ans++;
        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> board[i][j];
        }
    }
    for (int i = 0; i < k; i++) {
        int r, c;
        cin >> r >> c;
        r--; c--;
        if (!visited[r][c]) {
            visited[r][c] = 1;
            q.push({r,c});
            ans++;
            Bfs();
        }
    }
    cout << ans;
    return 0;
}