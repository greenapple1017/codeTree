#include <iostream>
using namespace std;

int SquareSum(int n) {
    if (n == 0) return 0;
    return SquareSum(n / 10) + (n % 10)*(n % 10);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    cout << SquareSum(n);
    return 0;
}





