#include <iostream>
#include <queue>
using namespace std;

#define MAX_N 100

int n, m;
int board[MAX_N][MAX_N];
int dist[MAX_N][MAX_N];
int visited[MAX_N][MAX_N];

int dr[4] = {-1,0,1,0};
int dc[4] = {0,1,0,-1};

struct Point{
    int r;
    int c;
};

queue<Point> q;

inline bool InRange(int r, int c) {
    return r >= 0 && r < n && c >= 0 && c < m;
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
    
    while (!q.empty()) {
        Point cur = q.front();
        q.pop();
        for (int dir = 0; dir < 4; dir++) {
            int next_r = cur.r + dr[dir];
            int next_c = cur.c + dc[dir];
            if (!InRange(next_r, next_c)) continue;
            if (visited[next_r][next_c]) continue;
            if (!board[next_r][next_c]) continue;
            visited[next_r][next_c] = 1;
            q.push({next_r, next_c});
            dist[next_r][next_c] = dist[cur.r][cur.c] + 1;
        }
    }

    if (dist[n-1][m-1] == 0) cout << -1;
    else cout << dist[n-1][m-1];
    return 0;
}