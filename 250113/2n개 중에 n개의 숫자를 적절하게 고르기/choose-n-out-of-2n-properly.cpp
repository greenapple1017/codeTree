#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int n;
int num[20];
int visited[20];
int ans = INT_MAX;
int sum, sum1, sum2;

void sol(int selected) {
    if (selected == n) {
        int diff = (sum1 > sum2) ? sum1 - sum2 : sum2 - sum1;
        ans = min(ans, diff);
        return;
    }
    for (int i = 0; i < 2 * n; i++) {
        if (!visited[i]) {
            sum1 += num[i];
            sum2 -= num[i];
            visited[i] = 1;
            sol(selected + 1);
            visited[i] = 0;
            sum1 -= num[i];
            sum2 += num[i];
        }
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < 2 * n; i++) {
        cin >> num[i];
        sum += num[i];
    }
    sum2 = sum;
    sol(0);
    cout << ans;


    return 0;
}
