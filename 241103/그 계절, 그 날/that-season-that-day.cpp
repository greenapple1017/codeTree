#include <iostream>
using namespace std;

int Y, M, D;

int isyun(int y) {
    if (y % 4 == 0) {
        if (y % 100 == 0) {
            if (y % 400 == 0) {
                return 1;
            }
            return 0;
        }
        return 1;
    }
    else {
        return 0;
    }
}

void sol(int y, int m, int d) {
    if (m == 2 && d >= 29 && d <= 31) {
        if (isyun(y) && d == 29) {
            cout << "Winter";
            return;
        }
        cout << -1;
        return;
    }
    if (m >= 3 && m <= 5) cout << "Spring";
    else if (m >= 6 && m <= 8) cout << "Summer";
    else if (m >= 9 && m <= 11) cout << "Fall";
    else cout << "Winter";
    return;
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> Y >> M >> D;
    sol(Y,M,D);

    return 0;
}