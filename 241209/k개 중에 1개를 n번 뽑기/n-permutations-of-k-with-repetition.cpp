#include <iostream>
using namespace std;

int k, n;
int arr[8];


void f(int idx) {
    if (idx == n-1) {
        for (int i = 0; i < n; i++) {
            cout << arr[i] << ' ';
        }
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