#include <iostream>
#include <string>
using namespace std;

#define MAX_N 100

int n, x, y;
string board[MAX_N];
bool visited[MAX_N][MAX_N];
int dr[4] = {0,1,0,-1};
int dc[4] = {1,0,-1,0};
int total_time;

struct Point{
    int r;
    int c;
    int dir;
};

Point ball;

inline bool InRange(int r, int c) {
    return r >= 0 && r < n && c >= 0 && c < n;
}

void MoveForward() {
    ball.r += dr[ball.dir];
    ball.c += dc[ball.dir];
    total_time++;
}

void Debug() {
    cout << "time: " << total_time << '\n';
    cout << "ball status: " << ball.r << ' ' << ball.c << ball.dir << '\n';
}

int NextState() {
    int nr = ball.r + dr[ball.dir];
    int nc = ball.c + dc[ball.dir];

    // 탈출
    if (!InRange(nr, nc)) {
        return 1;
    }

    // 진행 방향으로 이동 불가능
    if (board[nr][nc] == '#') {
        return 0;
    }
    // 진행 방향으로 이동 가능
    else {
        int diag_r = nr + dr[(ball.dir + 1) % 4];
        int diag_c = nc + dc[(ball.dir + 1) % 4];
        // 진행 방향 오른쪽 대각선 방향에 벽 없음
        if (board[diag_r][diag_c] != '#') {
            // 근데 이미 방문했음
            if (visited[diag_r][diag_c]) {
                return 2;
            }
            // 방문 안 한 곳임
            else {
                return 3;
            }
        }
        // 진행 방향 오른쪽 대각선에 벽 있음
        else {
            return 4;
        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> x >> y;
    x--; y--;
    ball = {x,y,0};
    for (int i = 0; i < n; i++) {
        cin >> board[i];
    }

    while (1) {
        // Debug();
        int ns = NextState();
        if (ns == 0) {
            ball.dir = (ball.dir + 3) % 4;
        }
        else if (ns == 1) {
            total_time++;
            cout << total_time;
            return 0;
        }
        else if (ns == 2) {
            cout << -1;
            return 0;
        }
        else if (ns == 3) {
            MoveForward();
            ball.dir = (ball.dir + 1) % 4;
            MoveForward();
            visited[ball.r][ball.c] = 1;
        }
        else if (ns == 4) {
            MoveForward();
            visited[ball.r][ball.c] = 1;
        }
    }

    return 0;
}
