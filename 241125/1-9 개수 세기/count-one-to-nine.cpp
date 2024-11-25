#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10]{0}; // arr[1] ~ arr[9] 만 사용
    int n;
    cin >> n;
    while (n--) {
        int tmp;
        cin >> tmp;
        arr[tmp]++;
    }
    for (int i = 1; i <= 9; i++) {
        cout << arr[i];
    }

    return 0;
}