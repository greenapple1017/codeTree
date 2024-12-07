#include <iostream>
using namespace std;

#define MAX_N 100
#define MAX_M 100

int n,m;

int board[MAX_N][MAX_M];
int visited[MAX_N][MAX_M];

int dr[2]={1,0};
int dc[2]={0,1};

inline bool InRange(int r, int c) {
    return r >= 0 && r < n && c >= 0 && c < m;
}

void Dfs(int r, int c){
    /*
    if (r == n-1 && c == m-1) {
        ans = 1;
        return;
    }
    // 알아서 끝나기 때문에 굳이 return 필요 없다.
    */

    for (int dir = 0; dir < 2; dir++) {
        int next_r = r + dr[dir];
        int next_c = c + dc[dir];
        if (!InRange(next_r, next_c)) continue;
        if (!visited[next_r][next_c] && board[next_r][next_c] == 1) {
            visited[next_r][next_c] = 1;
            Dfs(next_r, next_c);
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

    Dfs(0, 0);
    if (visited[n-1][m-1] == 1) cout << 1;
    else cout << 0;
    return 0;
}