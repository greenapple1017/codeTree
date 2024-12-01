#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

struct Point{
    int x;
    int y;
};

int ans = INT_MAX;

Point points[105];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> points[i].x >> points[i].y;
    }
    
    for (int i = 0; i < n; i++) {
        int min_x = 50000;
        int max_x = 0;
        int min_y = 50000;
        int max_y = 0;
        for (int j = 0; j < n; j++) {
            if (j == i) continue;
            else {
                min_x = min(points[j].x, min_x);
                max_x = max(points[j].x, max_x);
                min_y = min(points[j].y, min_y);
                max_y = max(points[j].y, max_y);               
            }
        }
        ans = min(ans, (max_x-min_x)*(max_y-min_y));
    }
    cout << ans;
    return 0;
}