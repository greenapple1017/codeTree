#include <iostream>
using namespace std;

int Seq(int n) {
    if (n == 1) return 2;
    if (n == 2) return 4;

    return Seq(n-2) * Seq(n-1) % 100;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    cout << Seq(n);
    return 0;
}