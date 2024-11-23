#include <iostream>
using namespace std;

long long Sum(long long n) {
    if (n < 10) return n;

    return (n % 10) + Sum(n / 10);
}

int main() {
    // 여기에 코드를 작성해주세요.
    long long a,b,c;
    cin >> a >> b >> c;
    long long mul = a*b*c;
    cout << Sum(mul);
    return 0;
}