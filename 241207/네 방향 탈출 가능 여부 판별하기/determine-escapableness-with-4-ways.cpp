#include <iostream>
#include <queue>
using namespace std;

#define MAX_N 100

struct Point{
    int r;
    int c;
};

int board[MAX_N][MAX_N];
int visited[MAX_N][MAX_N];
queue<Point> q;

int n,m;

int dr[4] = {-1,0,1,0};
int dc[4] = {0,1,0,-1};

inline bool InRange(int r, int c) {
    return r >= 0 && r < n && c >= 0 && c < m; 
    // n, m이 다를 때 진짜 주의... 
}

void Bfs(int r, int c) {
    while (!q.empty()) {
        int cur_r = q.front().r;
        int cur_c = q.front().c;
        q.pop();
        for (int dir = 0; dir < 4; dir++) {
            int next_r = cur_r + dr[dir];
            int next_c = cur_c + dc[dir];
            if (!InRange(next_r, next_c)) continue;
            if (board[next_r][next_c] == 0) continue;
            if (visited[next_r][next_c]) continue;
            visited[cur_r][cur_c] = 1;
            q.push({next_r, next_c});
        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> board[i][j];
        }
    }

    visited[0][0] = 1;
    q.push({0,0});
    Bfs(0,0);
    if (visited[n-1][m-1] == 1) cout << 1;
    else cout << 0;

    return 0;
}