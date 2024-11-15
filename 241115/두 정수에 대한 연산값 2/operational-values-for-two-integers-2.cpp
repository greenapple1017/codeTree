#include <iostream>
using namespace std;

void sol(int &a, int &b) {
    if (a > b) {
        b += 10;
        a *= 2;
    }
    else {
        b *= 2;
        a += 10;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    sol(a, b);
    cout << a << " " << b;
    return 0;
}