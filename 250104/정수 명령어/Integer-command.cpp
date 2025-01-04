#include <iostream>
#include <set>
using namespace std;

int t;
set<int> s;

void Debug() {
    for (auto num : s) {
        cout << num << ' ';
    }
    cout << '\n';
}

int main() {
    // Please write your code here.
    cin >> t;
    for (int _i = 0; _i < t; _i++) {
        // 이거 안해줘서 틀림
        s.clear();
        int k;
        cin >> k;
        for (int i = 0; i < k; i++) {
            char cmd;
            cin >> cmd;
            // 이 로직 떄문에 틀림
            int n;
            cin >> n;
            if (cmd == 'I') {
                s.insert(n);
            }
            else {
                if (!s.empty()) {
                    if (n == 1) {
                        s.erase(*s.rbegin());
                    }
                    else {
                        s.erase(*s.begin());
                    }
                }
            }
            //Debug();           
        }
        if (s.empty()) {
            cout << "EMPTY\n";
        }
        else {
            cout << *s.rbegin() << ' ' << *s.begin() << '\n';
        }
    }
    return 0;
}