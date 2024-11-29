#include <iostream>
using namespace std;

#define MAX_N 1000
#define MAX_T 1000

// OOB gives a runtime error
int a[MAX_N * MAX_T + 5];
int b[MAX_N * MAX_T + 5];
int cur_a, cur_b;
int t_a, t_b;

void Print() {
    cout << "cur_a: " << cur_a << '\n';
    cout << "cur_b: " << cur_b << '\n';
    cout << "t_a: " << t_a << '\n';
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        char d;
        int t;
        cin >> d >> t;
        if (d == 'R') {
            for (int j = 0; j < t; j++) {
                cur_a++;
                t_a++;
                a[t_a] = cur_a;
            }
        }
        else if (d == 'L') {
            for (int j = 0; j < t; j++) {
                cur_a--;
                t_a++;
                a[t_a] = cur_a;
            }
        }
        //Print();
    }
    for (int i = 0; i < m; i++) {
        char d;
        int t;
        cin >> d >> t;
        if (d == 'R') {
            for (int j = 0; j < t; j++) {
                cur_b++;
                t_b++;
                b[t_b] = cur_b;
            }
        }
        else if (d == 'L') {
            for (int j = 0; j < t; j++) {
                cur_b--;
                t_b++;
                b[t_b] = cur_b;
            }
        }
        //Print();
    }
    for (int i = 1; i <= t_a; i++) {
        if (a[i] == b[i]) {
            cout << i;
            return 0; // I put this outside of the if statement...
        }
    }
    cout << -1;
    return 0;
}