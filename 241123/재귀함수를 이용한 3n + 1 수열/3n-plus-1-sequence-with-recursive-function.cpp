#include <iostream>
using namespace std;

int Count(int n) {
    if (n == 1) return 0;
    
    if (n % 2 == 0) {
        return 1 + Count(n / 2);
    }
    else {
        return 1 + Count(n * 3 + 1);
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    cout << Count(n);
    return 0;
}