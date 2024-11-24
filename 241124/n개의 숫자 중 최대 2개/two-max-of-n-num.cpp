#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;


int arr[100];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n, greater<int>());
    cout << arr[0] << " " << arr[1];
    return 0;
}