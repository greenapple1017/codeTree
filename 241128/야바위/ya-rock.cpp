#include <iostream>
using namespace std;

int arr[4]; // use index 1,2,3
void Swap(int a, int b){
    int tmp;
    tmp = arr[a];
    arr[a] = arr[b];
    arr[b] = tmp;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int ans = 0;
    for (int k = 0; k < 3; k++) {
        int ans_cand = 0;
        for (int i = 0; i < n; i++) {
            int a, b, c;
            cin >> a >> b >> c;
            Swap(a,b);
            if (arr[c] == 1) ans_cand++;
        }
        if (ans_cand > ans) ans = ans_cand;
    }
    cout << ans;
    return 0;
}