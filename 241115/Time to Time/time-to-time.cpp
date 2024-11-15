#include <iostream>
using namespace std;

int fromZero(int &h, int &m) {
    return h * 60 + m;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << fromZero(c,d) - fromZero(a,b);

    return 0;
}