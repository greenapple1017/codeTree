#include <iostream>
#include <string>
using namespace std;

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

int main() {
    // 여기에 코드를 작성해주세요.
    string s;
    cin >> s;
    int dir = 0;
    int x, y;
    x = y = 0;
    for (size_t n = 0; n < s.length(); n++) {
        if (s[n] == 'R') {
            dir += (dir+1) / 4;
        }
        else if (s[n] == 'L') {
            dir += (dir+3) / 4;
        }
        x += dx[dir];
        y += dy[dir];
        cout << x << " " << y;
    }
    return 0;
}