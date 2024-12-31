#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string s;
    cin >> s;
    unordered_map<char, int> freq;
    for (const char &c : s) {
        ++freq[c];
    }
    /* 
    문자열 순서다 이렇게 하면안됨
    for (auto it = freq.cbegin(); it != freq.cend(); ++it) {
        if (it->second == 1) {
            cout << it->first;
            return 0;
        }
    }
    */
    for (const char &c : s) {
        if (freq[c] == 1) {
            cout << c;
            return 0;
        }
    }
    cout << "None";
    return 0;
}