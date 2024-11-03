#include <iostream>
using namespace std;

int a[55];

void div(int a[], int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) cout << a[i] / 2 << " ";
        else cout << a[i] << " ";
    }
    return;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;   
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    div(a, n);
    return 0;
}