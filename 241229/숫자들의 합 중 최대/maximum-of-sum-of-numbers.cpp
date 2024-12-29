#include <iostream>
#include <algorithm>
using namespace std;

int ans;

int SumDigit(int n) {
    int t = 0;
    int q, r;
    do {
        t += n % 10;
        q = n / 10;
    } while (!q);
    return t;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int x, y;
    cin >> x >> y;
    for (int i = x; i <= y; i++) {
        ans = max(ans, SumDigit(i));
    }
    cout << ans;
    return 0;
}