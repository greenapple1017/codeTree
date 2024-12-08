#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

#define MAX_N 100

int n;

int board[MAX_N][MAX_N];
int visited[MAX_N][MAX_N];

int num_bomb, max_blks;

int dr[4] = {-1,0,1,0};
int dc[4] = {0,1,0,-1};

struct Point{
    int r;
    int c;
};

queue<Point> q;

inline bool InRange(int r, int c) {
    return r >= 0 && r < n && c >= 0 && c < n;
}

void Bfs(int r, int c) {
    int blks = 1;
    while (!q.empty()) {
        Point cur = q.front();
        q.pop();
        for (int dir = 0; dir < 4; dir++) {
            int next_r = cur.r + dr[dir];
            int next_c = cur.c + dc[dir];
            if (!InRange(next_r, next_c)) continue;
            if (visited[next_r][next_c]) continue;
            if (board[next_r][next_c] != board[cur.r][cur.c]) continue;
            visited[next_r][next_c] = 1;
            blks++;
            q.push({next_r, next_c});
        }
    }
    if (blks >= 4) num_bomb++;
    max_blks = max(max_blks, blks);
}


int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> board[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!visited[i][j]) {
                visited[i][j] = 1;
                q.push({i,j});
                Bfs(i,j);
            }
        }
    }
    cout << num_bomb << ' ' << max_blks;
    return 0;
}