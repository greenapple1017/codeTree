#include <iostream>
#include <queue>
using namespace std;

int dr[8] = {-2,-1,1,2,2,1,-1,-2};
int dc[8] = {1,2,2,1,-1,-2,-2,-1};

int board[105][105];
int n;

struct Point{
    int r;
    int c;
};

queue<Point> q;

void Print() {
    cout << '\n';
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << board[i][j] << ' ';
        }
        cout << '\n';
    }
}

inline bool InRange(int r, int c) {
    return r >= 0 && r < n && c >= 0 && c < n;
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    int st_r, st_c, en_r, en_c;
    cin >> st_r >> st_c >> en_r >> en_c;
    
    // 이거 안해줘서 처음에 틀림
    st_r--; st_c--; en_r--; en_c--;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            board[i][j] = -1;
        }
    }
    board[st_r][st_c] = 0;
    q.push({st_r, st_c});
    while (!q.empty()) {
        int cur_r = q.front().r;
        int cur_c = q.front().c;
        q.pop();
        for (int i = 0; i < 8; i++) {
            int nr = cur_r + dr[i];
            int nc = cur_c + dc[i];
            if (!InRange(nr, nc) || board[nr][nc] != -1) continue;
            board[nr][nc] = board[cur_r][cur_c] + 1;
            q.push({nr,nc});
        }
    }
    cout << board[en_r][en_c];
    //Print();
    return 0;
}