#include <iostream>
#include <unordered_map>
using namespace std;

int n;
unordered_map<int, int> point;

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        if (point.find(x) != point.end()) {
            if (point[x] > y) {
                point[x] = y;
            }
        }
        else {
            point[x] = y;
        }
    }
    int ans = 0;
    for (auto it = point.begin(); it != point.end(); ++it) {
        ans += it->second;
    }
    cout << ans;


    return 0;
}