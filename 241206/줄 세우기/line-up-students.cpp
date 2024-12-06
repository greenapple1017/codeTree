#include <iostream>
#include <algorithm>
using namespace std;

int n;

struct Student {
    int height;
    int weight;
    int num;

    bool operator<(const Student &rhs) const {
        if (height != rhs.height) return height > rhs.height;
        if (weight != rhs.weight) return weight > rhs.weight;
        return num < rhs.num;
    }
};
Student s[1005];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int h, w;
        cin >> h >> w;
        s[i] = {h, w, i};
    }
    sort(s+1, s+1+n);
    for (int i = 1; i <= n; i++) {
        cout << s[i].height << ' ' << s[i].weight << ' ' << s[i].num << endl;
    }
    return 0;
}