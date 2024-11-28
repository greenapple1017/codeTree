#include <iostream>
using namespace std;

int arr[4]; // use index 1,2,3
void Swap(int a, int b){
    int tmp;
    tmp = arr[a];
    arr[a] = arr[b];
    arr[b] = tmp;
}

void Print() {
    for (int i = 1; i <= 3; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int ans = 0;
    for (int k = 1; k <= 3; k++) {
        arr[1] = arr[2] = arr[3] = 0;
        int ans_cand = 0;
        arr[k] = 1;
        for (int i = 0; i < n; i++) {
            int a, b, c;
            cin >> a >> b >> c;
            Swap(a,b);
            if (arr[c] == 1) ans_cand++;
        }
        //Print();
        //cout << "ans_cand: " << ans_cand;
        if (ans_cand > ans) ans = ans_cand;
    }
    cout << ans;
    return 0;
}