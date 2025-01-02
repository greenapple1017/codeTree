#include <iostream>
#include <map>
#include <string>
using namespace std;

map<int, int> m;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string cmd;
        cin >> cmd;
        if (cmd == "add" ) {
            int k, v;
            cin >> k >> v;
            m[k] = v;
        }
        else if (cmd == "remove") {
            int k;
            cin >> k;
            m.erase(k);
        }
        else if (cmd == "find") {
            int k;
            cin >> k;
            auto it = m.find(k);
            if (it != m.end()) {
                cout << m[k];
            }
            else {
                cout << "None";
            }
            cout << '\n';
        }
        else {
            if (m.size() != 0) {
                for (auto it = m.begin(); it != m.end(); ++it) {
                    cout << it->second << ' ';
                }
                cout << '\n';
            }
            else {
                cout << "None\n";
            }
        }
    }
    return 0;
}