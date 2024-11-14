#include <string>
#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int ans = 0;
    string fruit[5] = {"apple", "banana", "grape", "blueberry", "orange"};
    char a;
    cin >> a;
    for (auto s : fruit) {
        if (a == s[2] || a == s[3]) {
            cout << s << endl;
            ans++;
        }
    }
    cout << ans;
    return 0;
}