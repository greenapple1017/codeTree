#include <iostream>
using namespace std;

int arr[8];
int k, n;

void f(int idx) {
    if (idx == n) {
        for (int i = 0; i < n; i++) {
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for (int i = 1; i <= k; i++) {
        if (idx >= 2 && (arr[idx-2] == arr[idx-1])) {
            if (i == arr[idx-1]) continue;
        }
        arr[idx] = i;
        f(idx+1);
    }
}

int main() {
    cin >> k >> n;
    f(0);
    return 0;
}