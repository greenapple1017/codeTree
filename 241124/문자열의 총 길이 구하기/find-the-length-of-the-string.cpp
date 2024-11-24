#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a[10];
    size_t ans = 0;
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
        ans += a[i].length();
    }
    cout << ans;
    return 0;
}