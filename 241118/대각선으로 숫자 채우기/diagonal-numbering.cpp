#include <iostream>
using namespace std;

int arr[105][105];

void PrintArray(int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " "
        }
        cout << '\n';
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;
    int num = 1;
    for (int j = 0; j < m; j++) {
        for (int i = 0; i <= j; i++) {
            arr[i][j] = num;
            num++;
        }
    }
    PrintArray(n,m);

    return 0;
}