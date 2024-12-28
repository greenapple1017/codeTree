#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;
#define MAX_N 100

int dr[4] = {-1,0,1,0};
int dc[4] = {0,1,0,-1};
int change_dir_1[4] = {1,0,3,2};
int change_dir_2[4] = {3,2,1,0};

int n;
int board[MAX_N + 2][MAX_N + 2];

int ans = INT_MIN;
int cur_r, cur_c, cur_dir, tmp_ans;

inline bool InRange(int r, int c) {
    return r >= 1 && r <= n && c >= 1 && c <= n;
}

void Simulate() {
    tmp_ans = 0;
    do {
        cur_r += dr[cur_dir];
        cur_c += dc[cur_dir];
        tmp_ans++;

        if (board[cur_r][cur_c] == 1) {
            cur_dir = change_dir_1[cur_dir];
        }
        else if (board[cur_r][cur_c] == 2) {
            cur_dir = change_dir_2[cur_dir];
        }
    } while (InRange(cur_r, cur_c));
    ans = max(tmp_ans, ans);
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> board[i][j];
        }
    }
    for (int i = 1; i <= n; i++) {
        cur_r = 0;
        cur_c = i;
        cur_dir = 2;
        Simulate();
    }
    for (int i = 1; i <= n; i++) {
        cur_r = i;
        cur_c = n+1;
        cur_dir = 3;
        Simulate();
    }
    for (int i = 1; i <= n; i++) {
        cur_r = n+1;
        cur_c = i;
        cur_dir = 0;
        Simulate();
    }
    for (int i = 1; i <= n; i++) {
        cur_r = i;
        cur_c = 0;
        cur_dir = 1;
        Simulate();
    }
    cout << ans;
    return 0;
}

/*

*/