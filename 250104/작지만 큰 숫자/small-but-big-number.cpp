#include <iostream>
#include <set>
using namespace std;

set<int> s;

void Debug() {
    for (int num : s) {
        cout << num << ' ';
    }
    cout << '\n';
}

int main() {
    // Please write your code here.
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        auto it = s.upper_bound(x); // x보다 큰 첫번째 위치
        if (it == s.begin()) {
            cout << -1 << '\n';
        }
        else 
            --it;
            cout << *it << '\n';
            s.erase(*it);
        }
        //Debug();
    }
    return 0;
}