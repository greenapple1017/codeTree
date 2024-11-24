#include <iostream>
using namespace std;

#define OFFSET 1000

int x_axis[2000];

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
                x_axis[cur+j]++;
            }
            cur += num;
        }
        else {
            for (int j = 0; j < num; j++) {
                x_axis[cur-j]++;
            }
            cur -= num;            
        }
    }

    int ans = 0;
    for (int i = 0; i < 2000; i++) {
        if (x_axis[i] >= 2) ans++;
    }
    cout << ans;
    return 0;
}