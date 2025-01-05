#include <iostream>
#include <climits>
using namespace std;
#define MAX_N 100000
int n;

int x[MAX_N];
int y[MAX_N];
int Lx[MAX_N];
int Rx[MAX_N];
int Ly[MAX_N];
int Ry[MAX_N];

int ans = INT_MAX;

inline int Dist(int a, int b) {
    return (a >= b) ? (a - b) : (b - a); 
}

int main() {
    // Please write your code here.
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        x[i] = a; y[i] = b;
    }
    Lx[0] = 0; Rx[0] = 0;
    Ly[n-1] = 0; Ry[n-1] = 0;
    for (int i = 1; i <= n-1; i++) {
        Lx[i] = Lx[i-1] + Dist(x[i], x[i-1]);
        Ly[i] = Ly[i-1] + Dist(y[i], y[i-1]);
    }
    for (int i = n-2; i >= 0; i--) {
        Rx[i] = Rx[i+1] + Dist(x[i], x[i+1]);
        Ry[i] = Ry[i+1] + Dist(y[i], y[i+1]);
    }
    for (int i = 1; i <= n-2; i++) {
        int dx = Dist(x[i+1], x[i-1]) + Lx[i-1] + Rx[i+1];
        int dy = Dist(y[i+1], y[i-1]) + Ly[i-1] + Ry[i+1];
        if (dx + dy < ans) ans = dx + dy;
    }
    cout << ans;
    return 0;
}