#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string s1, s2, ans = "";
    getline(cin, s1);
    getline(cin, s2);
    for (int i = 0; i < s1.length(); i++) {
        if (s1[i] != ' ') ans += s1[i];
    }
    for (int i = 0; i < s2.length(); i++) {
        if (s2[i] != ' ') ans += s2[i];
    }
    cout << ans;
    return 0;
}