#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int n;
int num[10];
int ans = INT_MAX;
int tmp_ans;

void sol(int cur) {
    if (cur == n-1) {
        ans = min(ans, tmp_ans);
        return;
    }

    for (int i = 1; i <= num[cur]; i++) {
        ++tmp_ans;
        sol(cur+i);
        --tmp_ans;
    }

}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }

    // Write your code here!
    sol(0);
    if (ans == INT_MAX) cout << -1;
    else cout << ans;

    return 0;
}
