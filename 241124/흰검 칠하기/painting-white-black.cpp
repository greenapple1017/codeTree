#include <iostream>
using namespace std;

//#define DEBUG

#define OFFSET 100000
#define MAX_TILE 200001

int tile[MAX_TILE], cnt_b[MAX_TILE], cnt_w[MAX_TILE];

int main() {
    int n;
    cin >> n;
    int cur = OFFSET; // 이걸 for문 안에 써놔서 1시간 버렸네..
    // 아 알았다. <검은색 두번, 회색 두번 이렇게 각각 이어야하는구나 그냥 네번이 아니라..
    // 문제 상황 잘못 이해해서 2시간 넘게 또 날렸네..
    for (int i = 0; i < n; i++) {
        int num;
        char dir;
        cin >> num >> dir;
        if (dir == 'R') {
            for (int j = 0; j < num; j++) {
                tile[cur+j] = 1; // 1 for black, -1 for white
                cnt_b[cur+j]++;
            }
            cur += (num-1);
            #ifdef DEBUG
            cout << "cur : " << cur << '\n';
            cout << "tile[" << cur << "] : " << tile[cur] << '\n';
            cout << "cnt_tile[" << cur << "] : " << cnt_tile[cur] << '\n';
            #endif

        }
        else if (dir == 'L') {
            for (int j = 0; j < num; j++) {
                tile[cur-j] = -1; // 1 for black, -1 for white
                cnt_w[cur-j]++;
            }
            cur -= (num-1);
            #ifdef DEBUG
            cout << "cur : " << cur << '\n';
            cout << "tile[" << cur << "] : " << tile[cur] << '\n';
            cout << "cnt_tile[" << cur << "] : " << cnt_tile[cur] << '\n';
            #endif            
        }
    }
    int b = 0, w = 0, g = 0;
    for (int i = 0; i < MAX_TILE; i++) {
        if (cnt_b[i] >= 2 && cnt_w[i] >= 2) g++;
        else {
            if (tile[i] == 1) b++;
            else if (tile[i] == -1) w++;
        }
    }
    cout << w << " " << b << " " << g;

    return 0;
}












/*
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
*/