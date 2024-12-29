#include <iostream>
#include <algorithm>
using namespace std;

int ans;

int SumDigit(int n) {
    int tmp = 0;
    do {
        tmp += n % 10;
        n /= 10;
    } while(n);
    return tmp;
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