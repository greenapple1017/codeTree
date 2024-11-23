#include <iostream>
using namespace std;

int arr[105];

int SumPartial(int a, int b) {
    int ans = 0;
    for (int i = a-1; i < b; i++) {
        ans += arr[i];
    }
    return ans;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < m; i++) {
        int a1, a2;
        cin >> a1 >> a2;
        cout << SumPartial(a1, a2) << endl;
    }
    return 0;
}