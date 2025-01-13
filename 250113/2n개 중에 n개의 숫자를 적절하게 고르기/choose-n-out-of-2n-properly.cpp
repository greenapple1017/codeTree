#include <iostream>
#include <climits>

using namespace std;

int n;
int num[20];
int visited[20];
int ans = INT_MAX;
int sum, sum1;

void sol(int selected) {
    if (selected == n) {
        ans = min(ans, sum - sum1);
        return;
    }
    for (int i = 0; i < 2 * n; i++) {
        if (!visited[i]) {
            sum1 += num[i];
            visited[i] = 1;
            sol(selected + 1);
            visited[i] = 0;
            sum1 -= num[i];
        }
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < 2 * n; i++) {
        cin >> num[i];
        sum += num[i];
    }
    sol(0);
    cout << ans;


    return 0;
}
