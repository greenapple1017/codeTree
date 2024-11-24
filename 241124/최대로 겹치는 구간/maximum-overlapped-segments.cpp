#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

#define OFFSET 100
//#define MAX_N 100
#define MAX_I 200

//int arr_x1[MAX_N], arr_x2[MAX_N];
int interval[MAX_I];

void Print() {
    for (int i = 0; i < MAX_I; i++) {
        cout << interval[i] << " ";
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x1, x2;
        cin >> x1 >> x2;
        x1 += OFFSET;
        x2 += OFFSET;
//        arr_x1[i] = x1;
//        arr_x2[i] = x2;
        for (int j = x1; j < x2; j++) {
            interval[j] += 1;
        }
    }
    sort(interval, interval+MAX_I, greater<int>());
    //Print();
    cout << interval[0];

    return 0;
}