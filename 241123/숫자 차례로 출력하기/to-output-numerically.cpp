#include <iostream>
using namespace std;



void PrintAscend(int n) {
    if (n == 0) return;
    PrintAscend(n-1);
    cout << n << " ";
}   

void PrintDescend(int n) {
    if (n == 0) return;
    cout << n << " ";
    PrintDescend(n-1);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    PrintAscend(n);
    return 0;
}