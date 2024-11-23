#include <iostream>
#include <algorithm>
using namespace std;

// idx == 1부터 시작
int arr[105];

int main() {
    // 여기에 코드를 작성해주세요.
    int n,k;
    cin >> n >> k;
    while(k--) {
        int a, b;
        cin >> a >> b;
        for (int i = a; i <= b; i++) {
            arr[i]++;
        }
    }
    sort(arr+1, arr+n+1);
    cout << arr[n];
    return 0;
}