#include <iostream>
using namespace std;

int n;
int arr[1005];
int ans;

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        if (i == 0 || arr[i] != arr[i-1]) {
            ans++;
        }
    }
    cout << ans;
    return 0;
}