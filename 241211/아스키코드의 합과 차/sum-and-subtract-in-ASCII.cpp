#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char c1, c2;
    cin >> c1 >> c2;
    int sum = c1 + c2;
    int diff = (c1 > c2) ? c1-c2 : c2-c1;
    cout << sum << diff;
    return 0;
}