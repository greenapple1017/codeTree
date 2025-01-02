#include <iostream>
#include <queue>
#include <string>
using namespace std;

priority_queue<int> pq;
int n;

int main() {
    // Please write your code here.
    cin >> n;
    for (int i = 0; i < n; i++) {
        string cmd;
        cin >> cmd;
        if (cmd == "push") {
            int a;
            cin >> a;
            pq.push(a);
        }
        else if (cmd == "pop") {
            cout << pq.top() << '\n';
            pq.pop();
        }
        else if (cmd == "size") {
            cout << pq.size() << '\n';
        }
        else if (cmd == "empty") {
            if (pq.empty()) {
                cout << 1 << '\n';
            }
            else {
                cout << 0 << '\n';
            }
        }
        else {
            cout << pq.top() << '\n';
        }
    }
    return 0;
}