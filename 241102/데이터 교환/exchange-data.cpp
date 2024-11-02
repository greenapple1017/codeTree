#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a = 5, b = 6, c = 7, tmp;
    tmp = a;
    a = c;
    c = b;
    b = tmp;
    cout << a << endl << b << endl << c;
    return 0;
}