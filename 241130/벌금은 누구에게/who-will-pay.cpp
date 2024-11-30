#include <iostream>
using namespace std;

int student[105]; // index 1 ~ 
int ans = -1;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m, k;
    cin >> n >> m >> k;
    
    for (int i = 0; i < m; i++) {
        int p;
        cin >> p;
        student[p]++;

        if (student[p] == k) {
            ans = p;
            break;
        }
    }
    cout << ans;
    return 0;
}