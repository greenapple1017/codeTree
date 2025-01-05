#include <iostream>
#include <set>
#include <unordered_map>
using namespace std;

int n, q;
set<int> coord;
unordered_map<int, int> mapper;

int main() {
    // Please write your code here.
    cin >> n >> q;
    while (n--) {
        int num;
        cin >> num;
        coord.insert(num);
    }
    int tmp = 0;
    for (auto it = coord.begin(); it != coord.end(); ++it) {
        mapper[*it] = tmp++;
    }
    while (q--) {
        int a, b;
        cin >> a >> b;
        cout << mapper[b] - mapper[a] + 1 << '\n';
    }
    return 0;
}