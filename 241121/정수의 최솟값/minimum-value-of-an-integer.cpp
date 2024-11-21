#include <iostream>
#include <algorithm>
using namespace std;

void sol(int a, int b, int c) {
    cout << min(min(a,b),c);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    cin >> a >> b >> c;
    sol(a,b,c);
    return 0;
}