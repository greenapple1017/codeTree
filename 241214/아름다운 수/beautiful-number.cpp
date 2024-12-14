#include <iostream>
using namespace std;

int n;
int arr[10];
int num_vis[5]; // using index from 1
int ans;

void Select(int idx) {
    if (idx == n) {
        int cur_idx = 0;
        while (1) {
            if (cur_idx == n) break;
            int tmp = arr[cur_idx];
            for (int i = 0; i < tmp; i++) {
                if (tmp != arr[cur_idx+i]) return;
            }
            cur_idx += tmp;
        }
        ans++;
        /*
        for (int i = 0; i < n; i++) {
            cout << arr[i] << ' ';
        }
        cout << '\n'; 
        */
        return;
    }
    for (int i = 1; i <= 4; i++) {
        arr[idx] = i;
        num_vis[i]++;
        Select(idx + 1);
        num_vis[i]--;
    }
}


int main() {
    cin >> n;
    Select(0);
    cout << ans;
    return 0;
}