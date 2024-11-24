#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string s;
    cin >> s;
    int ans = 0;
    for (auto i = 0; i < s.length(); i++) {
        if (s[i] == '(') {
            for (auto j = i+1; j < s.length(); j++) {
                if (s[j] == ')') ans++;
            }
        }
    }
    cout << ans;
    return 0;
}