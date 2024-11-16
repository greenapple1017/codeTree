#include <iostream>
#include <algorithm>
using namespace std;

void sol(int n, int m) {
    int ans, _n, _m;
    for (int i = 1; i < min(n,m); i++) {
        if (n % i == 0 && m % i == 0) {
            _n = n / i;
            _m = m / i;
            ans = i;
        }
    }
    cout << ans * _n * _m;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;
    sol(n,m);

    return 0;
}