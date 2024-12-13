#include <iostream>
using namespace std;

int n;
int arr[8];
int used[9];

void f(int idx) {
    if (idx == n) {
        for (int i = 0; i < n; i++) {
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for (int i = n; i > 0; i--) {
        if (!used[i]) {
            arr[idx] = i;
            used[i] = 1;
            f(idx+1);
            used[i] = 0;
        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    f(0);
    return 0;
}