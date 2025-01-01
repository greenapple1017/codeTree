#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    unordered_map<string, int> freq;

    /* string은 바꿀 수 있다.
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        char tmp[s.length()];
        sort(tmp, tmp+s.length());
        
    }
    */

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        freq[s]++;
    }
    int ans = 0;
    for (auto it = freq.begin(); it != freq.end(); ++it) {
        if (it->second > ans) ans = it->second;
    }
    cout << ans;
    return 0;
}