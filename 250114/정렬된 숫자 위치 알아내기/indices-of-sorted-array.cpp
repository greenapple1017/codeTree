#include <iostream>
#include <algorithm>
using namespace std;

int N;
int ans[1000];

struct Num {
    int data;
    int order;
} nums[1000];

struct comp {
    bool operator()(int a, int b) const {
        if (nums[a].data == nums[b].data) {
            return nums[a].order < nums[b].order;
        }
        return nums[a].data < nums[b].data;
    }
};

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> nums[i].data;
        nums[i].order = i+1;
    }

    sort(nums, nums + N, comp());

    for (int i = 0; i < N; i++) {
        ans[nums[i].order - 1] = i+1;
    }

    for (int i = 0; i < N; i++) {
        cout << ans[i] << ' ';
    }

    // Write your code here!


    return 0;
}
