#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

#define MAX_N 100000
int n;
string arr[MAX_N+5];
unordered_map<string, int> m;
int ans = 0;

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        // If there is no string
        if (m.find(arr[i]) == m.end()) {
            m[arr[i]] = 1;
        }
        else {
            m[arr[i]]++;
        }
        ans = max(ans, m[arr[i]]);
    }
    cout << ans;

    return 0;
}