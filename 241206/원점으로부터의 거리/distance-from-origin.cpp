#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

#define MAX_N 1000

int n;

struct Point{
    int x;
    int y;
    int num;

    bool operator<(const Point &rhs) const{
        int dist_lhs = abs(x) + abs(y);
        int dist_rhs = abs(rhs.x) + abs(rhs.y);
        if (dist_lhs != dist_rhs) {
            return dist_lhs < dist_rhs;
        }
        return num < rhs.num;
    }
};

Point p[MAX_N+1];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> p[i].x >> p[i].y;
        p[i].num = i;
    }
    sort(p+1, p+1+n);
    for (int i = 1; i <= n; i++) {
        cout << p[i].num << '\n';
    }
    return 0;
}