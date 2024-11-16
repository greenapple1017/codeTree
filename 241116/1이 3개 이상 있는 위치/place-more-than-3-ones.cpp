#include <iostream>
using namespace std;

int dr[4] = {-1,0,1,0};
int dc[4] = {0,1,0,-1};

int arr[105][105];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int cnt = 0;
            for (int dir = 0; dir < 4; dir++) {
                int nr = i, nc = j;
                nr += dr[dir];
                nc += dc[dir];
                if (nr < 0 || nc < 0 || nr >= n || nc >= n) continue;
                if (arr[nr][nc]) cnt++;
            }
            if (cnt >= 3) ans++;
        }
    }
    cout << ans;

    return 0;
}