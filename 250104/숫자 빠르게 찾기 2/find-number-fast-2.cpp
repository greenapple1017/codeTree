#include <iostream>
#include <set>
using namespace std;

set<int> s;

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
        auto it = s.lower_bound(x);
        if (it != s.end()) {
            cout << *it << '\n';
        }
        else cout << -1 << '\n';
    }
    return 0;
}