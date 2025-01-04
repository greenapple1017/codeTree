#include <iostream>
#include <climits>
using namespace std;
#define MAX_N 100000

int arr[MAX_N+1];
int prefix_sum[MAX_N+1];
int ans = INT_MIN;

int main() {
    // Please write your code here.
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    prefix_sum[1] = arr[1];
    for (int i = 2; i <= n; i++) {
        prefix_sum[i] = prefix_sum[i-1] + arr[i];
    }
    for (int i = k; i <= n; i++) {
        int candi = prefix_sum[i] - prefix_sum[i-k];
        if (candi > ans) ans = candi;
    }
    cout << ans;
    return 0;
}