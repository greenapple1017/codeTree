#include <iostream>

#define MAX_N 100
using namespace std;

int n, st_r, st_c;
char board[MAX_N+2][MAX_N+2];
bool visited[MAX_N+2][MAX_N+2][4];
int elapsed_time;
int cur_r, cur_c, cur_dir;
int dr[4] = {0,1,0,-1};
int dc[4] = {1,0,-1,0};

void Simulate();
bool InRange(int r, int c);
bool ExistWall(int r, int c);

void Debug() {
    cout << "cur_r, cur_c, cur_dir\n";
    cout << cur_r << ' ' << cur_c << ' ' << cur_dir << '\n';
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> st_r >> st_c;

    // 이걸 못봐서 1시간을 날렸네...
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> board[i][j];
        }
    }
    cur_r = st_r; cur_c = st_c; cur_dir = 0;
    do {
        Simulate();
        Debug();
        if (visited[cur_r][cur_c][cur_dir]) {
            cout << -1;
            exit(0);
        }
        else {
            visited[cur_r][cur_c][cur_dir] = 1;
        }
    } while (InRange(cur_r, cur_c));
    cout << elapsed_time;
    return 0;
}

bool InRange(int r, int c) {
    return r >= 1 && r <= n && c >= 1 && c <= n;
}

bool ExistWall(int r, int c) {
    return InRange(r,c) && board[r][c] == '#';
}

void Simulate() {
    int next_r = cur_r + dr[cur_dir];
    int next_c = cur_c + dc[cur_dir];

    if (!InRange(next_r, next_c)) {
        cur_r = next_r;
        cur_c = next_c;
        elapsed_time++;
    }
    else {
        if (ExistWall(next_r, next_c)) {
            cur_dir = (cur_dir+3) % 4;
        }
        else {
            int diag_r = next_r + dr[(cur_dir+1)%4];
            int diag_c = next_c + dc[(cur_dir+1)%4];
            if (ExistWall(diag_r, diag_c)) {
                cur_r = next_r;
                cur_c = next_c;
                elapsed_time++;
            }
            else {
                cur_r = diag_r;
                cur_c = diag_c;
                cur_dir = (cur_dir+1) % 4;
                elapsed_time += 2;
            }
        }
    }
}