#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cstring>
using namespace std;

#define MAX_N 20

int n;
int board[MAX_N + 10][MAX_N + 10];
int dr[3][5] = {{0,-1,-2,1,2}, {0,-1,0,1,0}, {0,-1,-1,1,1}};
int dc[3][5] = {{0,0,0,0,0}, {0,0,1,0,-1}, {0,-1,1,1,-1}};
int ans = INT_MIN;
int tmp_ans;
int visited[MAX_N + 10][MAX_N + 10];

struct Bomb{
    int r;
    int c;
    int b;
};

vector<Bomb> bombs;

inline bool InRange(int r, int c) {
    return r >= 0 && c >= 0 && r < n && c < n;
}

void sol(int k) {
    if (k == (int)bombs.size()) {
        memset(visited, 0, sizeof(visited));
        tmp_ans = 0;
        for (auto bomb : bombs) {
            for (int i = 0; i < 5; i++) {
                int next_r = bomb.r + dr[bomb.b][i];
                int next_c = bomb.c + dc[bomb.b][i];
                if (!InRange(next_r, next_c)) continue;
                if (visited[next_r][next_c]) continue;
                visited[next_r][next_c] = 1;
                tmp_ans++;
            }
        }
        ans = max(ans, tmp_ans);
        //cout << "ans: " << ans << '\n';
        return;
    }

    for (int i = 0; i < 3; i++) {
        bombs[k].b = i;
        sol(k+1);
        bombs[k].b = 0;
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> board[i][j];
            if (board[i][j]) bombs.push_back({i,j,-1});
        }
    }
    sol(0);
    cout << ans;
    return 0;
}