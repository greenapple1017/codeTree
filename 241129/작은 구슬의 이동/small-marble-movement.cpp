#include <iostream>
using namespace std;

int arr[55][55]; // use index 1 ~ 

int dr[4] = {-1,0,0,1};
int dc[4] = {0,1,-1,0};

struct Ball {
    int r;
    int c;
    int dir;
};

Ball ball;

int GetDir(char d) {
    if (d == 'U') return 0;
    else if (d == 'D') return 3;
    else if (d == 'R') return 1;
    else if (d == 'L') return 2;
}

bool ChangeDir(int n) {
    if (ball.r == 1 && ball.dir == 0 || 
        ball.r == n && ball.dir == 3 ||
        ball.c == 1 && ball.dir == 2 ||
        ball.c == n && ball.dir == 1) 
        return true;
    else 
        return false;
}

void Print() {
    cout << "(r,c): " << '(' << ball.r << ',' << ball.c << ')' << '\n';
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, t;
    cin >> n >> t;
    int r, c;
    char d;
    cin >> r >> c >> d;
    ball.r = r;
    ball.c = c;
    ball.dir = GetDir(d);

    for (int i = 0; i < t; i++) {
        //cout << "Before Move: " << endl;
        //Print();
        if (ChangeDir(n)) {
            ball.dir = 3 - ball.dir;
        }
        else {
            ball.r += dr[ball.dir];
            ball.c += dc[ball.dir];
        } 
        //cout << "After Move: " << endl;
        //Print();     
    }

    cout << ball.r << ' ' << ball.c;


    return 0;
}