#include <iostream>
using namespace std;

#define OFFSET 100000
#define MAX_TILE 200001

int tile[MAX_TILE];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int cur = OFFSET;
    for (int i = 0; i < n; i++) {
        int num;
        char dir;
        cin >> num >> dir;
        if (dir == 'R') {
            for (int j = 0; j < num; j++) {
                tile[cur+j]++;
            }
            cur += num-1;
        }
        else {
            for (int j = 0; j < num; j++) {
                tile[cur-j]++;
            }
            cur -= num-1;
        }
    }
    int black = 0, white = 0, gray = 0;
    for (int i = 0; i < MAX_TILE; i++) {
        if (i >= OFFSET) {
            if (tile[i] == 1 || tile[i] == 3) black++;
            else if (tile[i] == 2) white++;
            else if (tile[i] >= 4) gray++;
        }
        else {
            if (tile[i] == 1 || tile[i] == 3) white++;
            else if (tile[i] == 2) black++;
            else if (tile[i] >= 4) gray++;            
        }
    }
    cout << white << " " << black << " " << gray;
    return 0;
}