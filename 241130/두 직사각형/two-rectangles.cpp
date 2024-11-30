#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int a1,b1,a2,b2;
    cin >> a1 >> b1 >> a2 >> b2;
    if (a1 > x2 || b1 > y2 || a2 < x1 || b2 < y1) cout << "nonoverlapping";
    else cout << "overlapping";
    return 0;
}