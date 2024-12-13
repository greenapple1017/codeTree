#include <iostream>
using namespace std;

int n;
int arr[8];

void f(int idx) {
    if (idx == n) {
        for (auto i : arr) {
            cout << i << ' ';
        }
        cout << '\n';
        return;
    }

    for (int i = n; i > 0; i--) {
        arr[idx] = i;
        f(idx+1);
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    f(0);
    return 0;
}