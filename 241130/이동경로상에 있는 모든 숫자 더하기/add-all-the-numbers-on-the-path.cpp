#include <iostream>
#include <string>
using namespace std;
#define MAX_T 100000
#define MAX_N 99

int board[MAX_N+5][MAX_N+5];
int ans;

int dr[4] = {0,1,0,-1};
int dc[4] = {1,0,-1,0};

int main() {
    // 여기에 코드를 작성해주세요.
    int N, T;
    cin >> N >> T;
    string cmd;
    cin >> cmd;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> board[i][j];
        }
    }
    int cur_r, cur_c;
    cur_r = cur_c = N / 2;
    ans += board[cur_r][cur_c];
    int dir = 3; // North

    for (auto c : cmd) {
        if (c == 'R') {
            dir = (dir+1) % 4;
        }
        else if (c == 'L') {
            dir = (dir+3) % 4;
        }
        else {
            int next_r, next_c;
            next_r = cur_r + dr[dir];
            next_c = cur_c + dc[dir];
            if (next_r < 0 || next_r >= N || next_c < 0 || next_c >= N) continue;
            cur_r += dr[dir];
            cur_c += dc[dir];
            ans += board[cur_r][cur_c];
        }
    }
    cout << ans;

    return 0;
}