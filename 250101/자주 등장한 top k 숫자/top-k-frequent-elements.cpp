#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int n, k;
unordered_map<int, int> freq;
vector<int> v;

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        freq[num]++;
    }
    int mx = 0;
    for (auto it = freq.begin(); it != freq.end(); ++it) {
        if (it->second > mx) mx = it->second;
    }
    for (auto it = freq.begin(); it != freq.end(); ++it) {
        if (it->second == mx) v.push_back(it->first);
    }
    sort(v.begin(), v.end(), greater<int>());
    for (auto num : v) {
        cout << num << ' ';
    }
    return 0;
}