#include <iostream>
using namespace std;

int arr[55][55]; // use index 1 ~ 

int dr[4] = {-1,0,-1,1};
int dy[4] = {0,1,0,0};

struct Ball {
    int r;
    int c;
    int dir;
};

int GetDir(char d) {
    if (d == 'U') return 0;
    else if (d == 'D') return 3;
    else if (d == 'R') return 1;
    else if (d == 'L') return 2;
}

bool ChangeDir() {
    if (ball.r == 1 && ball.dir == 0 || 
        ball.r == n && ball.dir == 3 ||
        ball.c == 1 && ball.dir == 2 ||
        ball.c == n && ball.dir == 1) 
        return true;
    else 
        return false;
}


int main() {
    // 여기에 코드를 작성해주세요.
    int n, t;
    cin >> n >> t;
    int r, c;
    char d;
    cin >> r >> c >> d;
    Ball ball{r, c, GetDir(d)};
    for (int i = 0; i < t; i++) {
        if (ChangeDir()) {
            ball.dir = 3 - ball.dir;
        }
        else {
            ball.r += dr[ball.dir];
            ball.c += dc[ball.dir];
        }
    }
    cout << ball.r << ' ' << ball.c;

    return 0;
}