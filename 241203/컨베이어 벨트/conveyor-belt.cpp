#include <iostream>
using namespace std;

int n, t;
int board[2][205];

void Print() {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < n; j++) {
            cout << board[i][j] << ' ';
        }
        cout << '\n';
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> t;
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < n; j++) {
            cin >> board[i][j];
        }
    }
    for (int tm = 0; tm < t; tm++) {
        int tmp0 = board[0][n-1];
        int tmp1 = board[1][n-1];
        for (int i = n-1; i >= 1; i--) {
            board[0][i] = board[0][i-1];
            board[1][i] = board[1][i-1];
        }
        board[0][0] = tmp1;
        board[1][0] = tmp0;
    }
    Print();
    
    return 0;
}