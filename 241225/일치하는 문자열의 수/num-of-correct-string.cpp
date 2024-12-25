#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int ans = 0;
    string a;
    cin >> n >> a;
    for (int i = 0; i < n; i++) {
        string tmp;
        cin >> tmp;
        if (tmp == a) ans++;
    }
    cout << ans;
    return 0;
}