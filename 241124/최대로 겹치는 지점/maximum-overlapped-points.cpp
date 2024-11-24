#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

#define OFFSET -1

int arr[100];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x1, x2;
        cin >> x1 >> x2;
        x1 -= OFFSET;
        x2 -= OFFSET;
        for (int j = x1; j <= x2; j++) {
            arr[j]++;
        }
    }
    sort(arr, arr+100, greater<int>());
    cout << arr[0];
    return 0;
}