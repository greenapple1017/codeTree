#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<int, int> um;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    while (n--) {
        int x, y;
        cin >> x >> y;
        if (um.find(x) == um.end()) {
            um[x] = y;
        }
        else {
            if (y < um[x]) um[x] = y;
        }
    }
    int ans = 0;
    for (auto p : um) {
        ans += p.second;
    }
    cout << ans;
    return 0;
}