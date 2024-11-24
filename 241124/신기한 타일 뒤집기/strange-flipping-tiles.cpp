#include <iostream>
using namespace std;

#define MAX_X 100000

int tile[2*MAX_X - 1];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int cur = 0;
    while (n--) {
        int num;
        char dir;
        cin >> num >> dir;
        if (dir == 'R') {
            // 현재위치 cur부터 오른쪽으로 num개의 칸을 색칠
            for (int i = 0; i < num; i++) {
                tile[cur+i] = 1; // 1이면 오른쪽
            }
            cur += num-1;
            //cout << "Current position: " << cur << '\n';
        }
        else {
            for (int i = 0; i < num; i++) {
                tile[cur-i] = 2;
                cur -= i; 
            }         
            cur -= num-1; 
            //cout << "Current position: " << cur << '\n';            
        }
    }
    int w = 0, b = 0;

    for (int elem : tile) {
        if (elem == 1) b++;
        else if (elem == 2) w++;
    }
    cout << w << " " << b;
    return 0;
}