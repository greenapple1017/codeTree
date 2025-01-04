#include <iostream>
#include <queue>
#include <vector>
#include <functional>
using namespace std;

int n;
priority_queue<int, vector<int>, greater<int> > pq;

int main() {
    // Please write your code here.
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        pq.push(x);
        if (pq.size() < 3) cout << -1 << '\n';
        else {
            long long ans = 1;
            long long tmp[3];
            for (int j = 0; j < 3; j++) {
                tmp[j] = (long long)pq.top();
                pq.pop();
            }
            cout << tmp[0] * tmp[1] * tmp[2] << '\n';
            for (int j = 0; j < 3; j++) {
                pq.push(tmp[j]);
            }
        }
    }
    return 0;
}