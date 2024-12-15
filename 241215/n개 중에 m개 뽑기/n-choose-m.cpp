#include <iostream>
using namespace std;

int n, m;
int arr[10];
int visited[10]; // using index from 1

void f(int idx) {
    if (idx == m) {
        for (int i = 0; i < m; i++) {
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }

    int st = 1;
    if (idx != 0) {
        st = arr[idx-1] + 1;
    }

    for (int i = st; i <= n; i++) {
        if (!visited[i]) {
            arr[idx] = i;
            visited[i] = 1;
            f(idx + 1);
            visited[i] = 0;
        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> m;
    f(0);
    return 0;
}