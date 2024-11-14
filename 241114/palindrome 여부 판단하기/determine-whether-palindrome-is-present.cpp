#include <iostream>
#include <string>
using namespace std;

void ispalin(string s) {
    for (size_t i = 0; i < s.length() / 2; i++) {
        if (s[i] != s[s.length() - 1 - i]) {
            cout << "No";
            return;
        }
    }
    cout << "Yes";
}

int main() {
    // 여기에 코드를 작성해주세요.
    string s;
    cin >> s;
    ispalin(s);
    return 0;
}