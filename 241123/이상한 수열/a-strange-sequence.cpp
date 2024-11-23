#include <iostream>
using namespace std;

void Seq(int n) {
    if (n == 1) return 1;
    if (n == 2) return 2;

    return Seq(n/3) + Seq(n-1);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    cout << Seq(n);

    return 0;
}