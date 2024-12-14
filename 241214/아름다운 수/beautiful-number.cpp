#include <iostream>
using namespace std;

int n;
int arr[10];
int num_vis[5]; // using index from 1
int ans;

void Select(int idx) {
    if (idx == n) {
        for (int i = 1; i <= 4; i++) {
            if (num_vis[i] == 0) continue;
            if ((num_vis[i] % i) != 0) return;
        }
        ans++;
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