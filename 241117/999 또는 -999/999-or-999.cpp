#include <iostream>
#include <climits>
using namespace std;

int arr[105];

int main() {
    // 여기에 코드를 작성해주세요.
    int max_val = INT_MIN, min_val = INT_MAX;
    while (1) {
        int n;
        cin >> n;
        if (n == 999 || n == -999) break;
        if (n > max_val) max_val = n;
        if (n < min_val) min_val = n;
    }
    cout << max_val << " " << min_val;
    return 0;
}