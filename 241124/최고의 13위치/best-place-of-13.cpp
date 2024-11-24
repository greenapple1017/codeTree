#include <iostream>
using namespace std;

int a[20][20];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n; // 이걸 왜 맨날 빼먹냐..
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    int max_t = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-1; j++) {
            int tmp = 0;
            for (int k = 0; k < 3; k++) {
                if (a[i][j+k] == 1) tmp++;
            }
            if (tmp > max_t) max_t = tmp;
        }
    }
    cout << max_t;
    return 0;
}