#include <iostream>
#include <unordered_map>
using namespace std;

int n, m;
unordered_map<int, int> cnt_num;

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        cnt_num[num]++;      
    }
    for (int i = 0; i < m; i++) {
        int num;
        cin >> num;
        cout << cnt_num[num] << ' ';
    }
    return 0;
}