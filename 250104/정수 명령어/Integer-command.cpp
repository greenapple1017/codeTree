#include <iostream>
#include <set>
using namespace std;

int t;
set<int> s;


int main() {
    // Please write your code here.
    cin >> t;
    for (int _i = 0; _i < t; _i++) {
        int k;
        cin >> k;
        for (int i = 0; i < k; i++) {
            char cmd;
            cin >> cmd;
            if (cmd == 'I') {
                int n;
                cin >> n;
                s.insert(n);
            }
            else {
                if (!s.empty()) {
                    int num;
                    cin >> num;
                    if (num == 1) {
                        s.erase(*s.rbegin());
                    }
                    else {
                        s.erase(*s.begin());
                    }
                }
            }
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