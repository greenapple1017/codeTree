#include <iostream>
#include <set>
#include <string>
using namespace std;

set<int> s;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string cmd;
        cin >> cmd;
        if (cmd == "add") {
            int x;
            cin >> x;
            s.insert(x);
        }
        else if (cmd == "remove") {
            int x;
            cin >> x;
            s.erase(x);
        }
        else if (cmd == "find") {
            int x;
            cin >> x;
            if (s.find(x) != s.end()) {
                cout << "true\n";
            }
            else {
                cout << "false\n";
            }
        }
        else if (cmd == "lower_bound") {
            int x;
            cin >> x;
            auto it = s.lower_bound(x)
            if (it != s.end())
                cout << *s.lower_bound(x) << '\n';
            else
                cout << "None\n";
        }
        else if (cmd == "upper_bound") {
            int x;
            cin >> x;
            auto it = s.upper_bound(x)
            if (it != s.end())
                cout << *s.upper_bound(x) << '\n';
            else
                cout << "None\n";
        }
        else if (cmd == "largest") {
            if (s.empty()) cout << "None\n";
            /* set, map, list의 iterator은 random access iterator가 아니라 bidirectional iterator이므로 +, - 연산 안됨
            else cout << *(s.end()-1) << '\n';
            */
            else cout << *(--s.end()) << '\n';
        }
        else if (cmd == "smallest") {
            if (s.empty()) cout << "None\n";
            else cout << *s.begin() << '\n';
        }
    }
    return 0;
}