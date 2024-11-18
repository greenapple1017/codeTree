#include <iostream>
using namespace std;

int arr[4][4];

int main() {
    // 여기에 코드를 작성해주세요.
    int ans = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j <= i; j++) {
            ans += arr[i][j];
        }
    }
    cout << ans;
    return 0;
}