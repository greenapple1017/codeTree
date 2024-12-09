#include <iostream>
using namespace std;

int k, n;
int arr[8];


void f(int idx) {
    // n-1로 하니까 arr[n-1]이 안 정해지지. 
    if (idx == n) {
        for (int i = 0; i < n; i++) {
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    } 
    for (int i = 1; i <= k; i++) {
        arr[idx] = i;
        f(idx+1);
    }

}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> k >> n;
    f(0);


    return 0;
}