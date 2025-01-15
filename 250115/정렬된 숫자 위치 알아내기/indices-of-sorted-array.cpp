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
    bool operator()(const Num &a, const Num &b) const {
        if (a.data == b.data) {
            return a.order < b.order;
        }
        return a.data < b.data;
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



    return 0;
}
