#include <iostream>
using namespace std;

int a[105];
int n, k;
int ans;

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i <= n-k; i++) {
        int tmp = 0;
        for (int j = i; j <= i+k-1; j++) {
            tmp += a[j];
            if (ans < tmp) ans = tmp;
        }
    }
    cout << ans;
    return 0;
}