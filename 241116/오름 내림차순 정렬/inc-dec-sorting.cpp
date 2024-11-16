#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int arr[105];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr+n);
    for (int num : arr) cout << num;
    sort(arr, arr+n, greater<int>());
    for (int num : arr) cout << num;

    return 0;
}