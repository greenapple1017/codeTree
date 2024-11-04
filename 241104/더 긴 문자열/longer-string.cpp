#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string s1, s2;
    cin >> s1 >> s2;
    if (s1.length() > s2.length()) cout << s1.length();
    else if (s1.length() == s2.length()) cout << "same";
    else cout << s2.length();
    return 0;
}