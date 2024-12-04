#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string s;
    cin >> s;
    for (auto i = 0; i < s.length(); i++) {
        cout << s[i] << '\n';
    }
    return 0;
}