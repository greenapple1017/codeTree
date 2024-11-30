#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_N 100
#define MAX_K 250
#define MAX_T 250

int N, K, P, T;


/*
 * 완전히 설계를 잘못했다. T가 최대 시간이 아니므로 이렇게 짜면 안된다. 
 * 이래서 손코딩을 하라고 하나보다. 이렇게 다 짜고 나서 발견하면 처음부터 다 뜯어고쳐야하는데
 * 그럴 시간이 없다. 
 */
struct DevPair {
    int x;
    int y;
};
DevPair arr_time[MAX_T+5]; // index 1 ~ 

int dev[MAX_N+5];
int cnt[MAX_N+5];

void DebugPrint() {
    cout << "devlopers:\n";
    for (int i = 1; i <= N; i++) {
        cout << dev[i];
    }
    cout << endl;
    cout << "cnt:\n";
    for (int i = 1; i <= N; i++) {
        cout << cnt[i];
    }
    cout << endl;
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> N >> K >> P >> T;
    dev[P] = 1;
    cnt[P] = K;
    for (int i = 0; i < T; i++) {
        int t, x, y;
        cin >> t >> x >> y;
        arr_time[t].x = x;
        arr_time[t].y = y;
    }
    for (int i = 1; i <= MAX_T; i++) {
        //DebugPrint();
        int x = arr_time[i].x;
        int y = arr_time[i].y;
        // Skip if no handshaking
        if (x == 0) {
            continue;
        }
        // 둘 다 감염되고 전염성도 있는 경우
        if (dev[x] == 1 && cnt[x] > 0 && dev[y] == 1 && cnt[y] > 0) {
            cnt[x]--;
            cnt[y]--;
        }
        // 감염되었고 전염성 있는 사람이랑 감염되었지만 전염성 없는 사람 만나는 경우
        else if (dev[x] == 1 && cnt[x] > 0 && dev[y] == 1 && cnt[y] == 0) {
            cnt[x]--;
        }
        else if (dev[y] == 1 && cnt[y] > 0 && dev[x] == 1 && cnt[x] == 0) {
            cnt[y]--;
        }
        // 전염되었고 전염성 있는 사람이랑 감염 안됨 사람
        else if (dev[x] == 1 && cnt[x] > 0 && dev[y] == 0) {
            cnt[x]--;
            dev[y] = 1;
        }
        else if (dev[y] == 1 && cnt[y] > 0 && dev[x] == 0) {
            cnt[y]--;
            dev[x] = 1;
        }       
    }
    for (int i = 1; i <= N; i++) {
        cout << dev[i];
    }

    return 0;
}
