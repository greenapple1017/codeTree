#include <iostream>
using namespace std;

#define MAX_X 101;

int x_axis[MAX_X];
int ans;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        x_axis[i] = 1;
    }
    int c, d;
    cin >> c >> d;
    for (int i = c; i <= d; i++) {
        x_axis[i] = 1;
    }
    for (int i = 0; i < MAX_X; i++) {
        if (x_axis[i] != 0) ans++;
    }
    cout << ans;
    return 0;
}