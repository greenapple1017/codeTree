#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_N 50
#define MAX_K 100

int n, m;
int max_safe_k;
// 이렇게 초기화해야지 최대 안전 영역이 0일 때 커버가능. 
// 최대 최소 변수에서 초기값 설정을 주의하자!! 극단적 테케도. 
int max_safe = -1; 

int dr[4] = {-1,0,1,0};
int dc[4] = {0,1,0,-1};

int board[MAX_N][MAX_N];
int after_rain[MAX_N][MAX_N];
int visited[MAX_N][MAX_N];

void Debug() {
    cout << "after_rain: \n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << after_rain[i][j] << ' ';
        }
        cout << '\n';
    }
    cout << "visited: \n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << visited[i][j] << ' ';
        }
        cout << '\n';
    }
}

void Init(int k) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            visited[i][j] = 0;
            if (board[i][j] <= k) 
                after_rain[i][j] = -1;
            else 
                after_rain[i][j] = board[i][j];
        }
    }
}

inline bool InRange(int r, int c) {
    return r >= 0 && r < n && c >= 0 && c < m;
}

void Dfs(int r, int c) {
    for (int dir = 0; dir < 4; dir++) {
        int next_r = r + dr[dir];
        int next_c = c + dc[dir];
        if (!InRange(next_r, next_c)) continue;
        if (visited[next_r][next_c]) continue;
        // 와 이 오타를 진짜 내가 하네.... 상수를 앞에 써줘야하나
        if (after_rain[next_r][next_c] == -1) continue;
        visited[next_r][next_c] = 1;
        Dfs(next_r, next_c);
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
    for (int k = 1; k <= MAX_K; k++) {
        Init(k);
        //Debug();
        int tmp_safe{0};
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (after_rain[i][j] == -1) continue;
                if (visited[i][j]) continue;
                tmp_safe++;
                Dfs(i,j);
            }
        }
        if (max_safe < tmp_safe) {
            max_safe = tmp_safe;
            max_safe_k = k;
        }
        //Debug();
    }
    cout << max_safe_k << ' ' << max_safe;
    return 0;
}