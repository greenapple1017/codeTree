#include <iostream>
using namespace std;

int a[7];

int main() {
    // 여기에 코드를 작성해주세요.
    for (int i = 0; i < 10; i++) {
        int tmp;
        cin >> tmp;
        a[tmp]++;
    }
    for (int i = 1; i <= 6; i++) {
        cout << i << " - " << a[i] << endl;
    }
    return 0;
}