#include <iostream>
#include <climits>
using namespace std;

int arr[105];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int min_val = INT_MAX;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] < min_val) min_val = arr[i];
    }
    for (auto num : arr) {
        if (num == min_val) cnt++;
    }
    cout << min_val << " " << cnt;
    return 0;
}