#include <iostream>
using namespace std;

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int x,y;
    x = y = 0;
    while (n--) {
        char dir;
        int d;
        int num;
        cin >> dir >> num;
        if (dir == 'N') d = 0;
        else if (dir == 'E') d = 1;
        else if (dir == 'S') d = 2;
        else if (dir == 'W') d = 3;
        while (num--) {
            x += dx[d];
            y += dy[d];
        }
    }
    cout << x << " " << y;
    return 0;
}