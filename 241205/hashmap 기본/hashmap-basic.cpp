#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

unordered_map<int, int> m;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string cmd;
        cin >> cmd;
        if (cmd == "add") {
            int k, v;
            cin >> k >> v;
            m[k] = v;
        }
        else if (cmd == "find") {
            int k;
            cin >> k;   
            if (m.find(k) != m.end()) {
                cout << m[k] << '\n';
            }
            else {
                cout << "None\n";
            }

        }
        else if (cmd == "remove") {
            int k;
            cin >> k;
            m.erase(k);
        }
    }
    return 0;
}