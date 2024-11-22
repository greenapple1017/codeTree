#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    int ans = (a > b) ? a*b : b/a;
    cout << ans;
    return 0;
}