#include <iostream>
using namespace std;

int n;
int arr[1005];
int mx;

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int local_mx = 1;
    for (int i = 0; i < n; i++) {
        if (i == 0 || arr[i] != arr[i-1]) {
            local_mx = 1;
        }
        else local_mx++;
        if (local_mx >= mx) mx = local_mx;
        
    }
    cout << mx;
    return 0;
}