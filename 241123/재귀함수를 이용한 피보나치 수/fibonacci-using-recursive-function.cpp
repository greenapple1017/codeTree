#include <iostream>
using namespace std;

int fibo(int n) {
    if (n == 1 || n == 2) return 1;
    return fibo(n-1) + fibo(n-2);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    cout << fibo(n);
    return 0;
}