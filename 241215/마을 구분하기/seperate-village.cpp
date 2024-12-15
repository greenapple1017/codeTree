#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define MAX_N 25

int dr[4] = {-1,0,1,0};
int dc[4] = {0,1,0,-1};

int tot_village;
int board[MAX_N+5][MAX_N+5];
int visited[MAX_N+5][MAX_N+5];
int n;
vector<int> num_people;
int people;

inline bool InRange(int r, int c) {
    return r >= 0 && r < n && c >= 0 && c < n;
}

void Dfs(int r, int c) {
    visited[r][c] = 1;
    people++;
    for (int dir = 0; dir < 4; dir++) {
        int nr = r + dr[dir];
        int nc = c + dc[dir];
        if (!InRange(nr, nc) || board[nr][nc] == 0 || visited[nr][nc]) continue;
        Dfs(nr,nc);
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> board[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!visited[i][j] && board[i][j] == 1) {
                people = 0;
                tot_village++;
                Dfs(i,j);
                num_people.push_back(people);
            }
        }
    }
    sort(num_people.begin(), num_people.end());
    cout << tot_village << '\n';
    for (auto i : num_people) {
        cout << i << '\n';
    }
    return 0;
}