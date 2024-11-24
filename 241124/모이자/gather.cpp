#include <iostream>
#include <algorithm>
using namespace std;

int house[101]; // 1부터 100까지 인덱스
int if_house[101];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> house[i];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            int dist = (i>j) ? (i-j) : (j-i);
            if_house[i] += (dist * house[j]);
        }
    }
    sort(if_house+1, if_house+n+1);
    cout << if_house[1];
    return 0;
}