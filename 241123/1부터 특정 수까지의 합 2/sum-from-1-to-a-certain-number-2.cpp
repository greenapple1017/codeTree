#include <iostream>
using namespace std;

int Sum(int n) {
    if (n == 1) return 1;
    return n + Sum(n-1);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    cout << Sum(n);
    return 0;
}