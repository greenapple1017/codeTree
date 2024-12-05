#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

int n;
unordered_set<int> s;

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    for (int i = 0; i < n; i++) {
        string cmd;
        int x;
        cin >> cmd >> x;
        if (cmd == "find") {
            if (s.find(x) != s.end()) {
                cout << "true\n";
            }
            else {
                cout << "false'\n";
            }
        }
        else if (cmd == "add") {
            s.insert(x);
        }
        else if (cmd == "remove") {
            s.erase(x);
        }
    }
    return 0;
}