#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    unordered_set<int> us;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        us.insert(x);
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        if (us.find(x) != us.end()) {
            cout << 1 << ' ';
        }
        else {
            cout << 0 << ' ';
        }
    }
    return 0;
}