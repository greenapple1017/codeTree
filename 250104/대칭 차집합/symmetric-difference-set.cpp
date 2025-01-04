#include <iostream>
#include <unordered_set>
using namespace std;

int ans;
unordered_set<int> A, B;

int main() {
    // Please write your code here.
    int n, m;
    cin >> n >> m;
    while (n--) {
        int x;
        cin >> x;
        A.insert(x);
    }
    while (m--) {
        int x;
        cin >> x;
        B.insert(x);
    }
    unordered_set<int> tmp_A = A;
    for (int num : B) {
        if (tmp_A.find(num) != tmp_A.end()) {
            tmp_A.erase(num);
        }
    }
    ans += tmp_A.size();
    for (int num : A) {
        if (B.find(num) != B.end()) {
            B.erase(num);
        }
    }
    ans += B.size();
    cout << ans;
    return 0;
}