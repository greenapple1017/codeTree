#include <iostream>
#include <cstdlib>
using namespace std;

#define MAX_N 100

int dr[4] = {0,1,0,-1};
int dc[4] = {1,0,-1,0};

int n;
int cur_r, cur_c, cur_dir;
char board[MAX_N+2][MAX_N+2];
int visited[MAX_N+2][MAX_N+2][4];
int elapsed_time;

bool InRange(int r, int c) {
    return r >= 1 && r <= n && c >= 1 && c <= n;
}
bool WallExist(int r, int c) {
    return InRange(r, c) && board[r][c] =='#';
}
void Debug() {
    cout << "cur_r " << cur_r << endl;
    cout << "cur_c " << cur_c << endl;
    cout << "cur_dir " << cur_dir << endl;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            for (int k = 0; k < 4; k++) {
                cout << visited[i][j][k];
            }
            cout << ' ';
        }
        cout << '\n';
    }
}

void Simulate(){
    int next_r = cur_r + dr[cur_dir];
    int next_c = cur_c + dc[cur_dir];
    int diag_r = next_r + dr[(cur_dir+1) % 4];
    int diag_c = next_c + dc[(cur_dir+1) % 4];

    if (WallExist(next_r, next_c)) {
        cur_dir = (cur_dir+3) % 4;
        visited[cur_r][cur_c][cur_dir] = 1;
    }
    else if (!InRange(next_r, next_c)) {
        cur_r = next_r;
        cur_c = next_c;
        elapsed_time++;
        cout << elapsed_time;
        exit(0);
    }
    else if (WallExist(diag_r, diag_c)) {
        cur_r = next_r;
        cur_c = next_c;
        elapsed_time++;
        if (visited[cur_r][cur_c][cur_dir]) {
            cout << -1;
            exit(0);
        }    
        visited[cur_r][cur_c][cur_dir] = 1; 
    }
    else if (!WallExist(diag_r, diag_c)) {
        cur_r = diag_r;
        cur_c = diag_c;
        cur_dir = (cur_dir + 1) % 4;
        elapsed_time += 2;
        if (visited[cur_r][cur_c][cur_dir]) {
            cout << -1;
            exit(0);
        }   
        visited[cur_r][cur_c][cur_dir] = 1; 
    }
}

int main() {
    cin >> n;
    cin >> cur_r >> cur_c;
    cur_dir = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> board[i][j];
        }
    }
    visited[cur_r][cur_c][cur_dir] = 1;
    int debug_time = 0;
    do {
        Simulate();
        //Debug();
        //if (debug_time > 10) return 0;
        //debug_time++;
    } while (InRange(cur_r, cur_c));
}
