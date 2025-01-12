#include <iostream>

using namespace std;

int N, M;
int visited[10];
int arr[10];

void sol(int idx) {
    if (idx == M) {
        for (int i = 0; i < M; i++) {
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }

    int st = 1;
    if (idx > 0) st = arr[idx-1] + 1; 

    for (int i = st; i <= N; i++) {
        if (!visited[i-1]) {
            arr[idx] = i;
            visited[i-1] = 1;
            sol(idx+1);
            visited[i-1] = 0;
        }
    }
}

int main() {
    cin >> N >> M;

    // Write your code here!
    sol(0);


    return 0;
}
