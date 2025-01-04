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
    for (int num : B) {
        if (A.find(num) != A.end()) {
            A.erase(num);
        }
    }
    ans += A.size();
    for (int num : A) {
        if B.find(num) != B.end()) {
            B.erase(num);
        }
    }
    ans += B.size();
    cout << ans;
    return 0;
}