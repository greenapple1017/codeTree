#include <iostream>
using namespace std;

int ans;

void DevideNum(int n) {
    if (n == 1) return;

    // even
    if (n % 2 == 0) {
        n /= 2;
    }
    // odd
    else {
        n /= 3;
    }
    ans++;
    DevideNum(n);
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    DevideNum(n);
    cout << ans;
    return 0;
}