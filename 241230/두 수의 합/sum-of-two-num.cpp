#include <iostream>
#include <unordered_map>
using namespace std;
#define MAX_N 100000

int n, k;
int ans; 
unordered_map<int, int> umap;
int arr[MAX_N];

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        int complement = k-arr[i];
        ++umap[complement];
    }
    for (int num : arr) {
        ans += umap[k-num];
        ans /= 2;
    }
    cout << ans;
}

/*
arr에 저장.
보수를 umap에 저장.
arr 돌면서 보수의 value 곱해서 더하기 
*/