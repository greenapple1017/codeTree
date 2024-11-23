#include <iostream>
using namespace std;

int ans;

/*
void DevideNum(int n) {
    if (n == 1) return;

    // even
    if (n % 2 == 0) {
        n /= 2;
    }
    // odd
    else {
        n /= 3;
    }
    ans++;
    DevideNum(n);
}
*/

// 이 함수는 n이 주어졌을 때 1이 되기까지 나눈 횟수를 return하는 함수이다. 
int CountDevide(int n) {
    // n에 1이 주어지면 더 이상 나눌 횟수는 없으므로 0이 답이다. 
    if (n == 1) {
        return 0;
    }

    // 수학적 귀납법
    if (n % 2 == 0) {
        return 1 + CountDevide(n / 2);
    }
    else {
        return 1 + CountDevide(n / 3);
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    //DevideNum(n);
    //cout << ans;
    cout << CountDevide(n);
    return 0;
}