#include <iostream>
#include <algorithm>
using namespace std;

int arr[105]; // index 1 ~ n

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        if (i % 2 == 1) {
            sort(arr+1, arr+1+i);
            cout << arr[i/2 + 1] << ' ';
        }
    }
    return 0;
}