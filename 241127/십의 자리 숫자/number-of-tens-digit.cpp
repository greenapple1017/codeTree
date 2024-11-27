#include <iostream>
using namespace std;

inline int GetTens(int n) {
    return n / 10;
}

int num[11]; 

int main() {
    // 여기에 코드를 작성해주세요.
    while (1) {
        int n;
        cin >> n;
        if (n == 0) break;
        num[GetTens(n)]++;
    }
    for (int i = 1; i <= 9; i++) {
        cout << i << " - " << num[i] << endl;
    }
    return 0;
}