#include <iostream>
#include <unordered_map>
using namespace std;

int n, k;
unordered_map<int, int> um;
int ans;

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        um[num]++;
    }

    // unordered_map의 key-value 쌍은 pair으로 되어있다. 
    for (const auto &p : um) {
        ans += um[k-p.first] * um[p.first];
    }
    cout << ans / 2;
    return 0;
}