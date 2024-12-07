#include <iostream>
#include <vector>
#include <string>
using namespace std;

int n;
vector<int> v;

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    for (int i = 0; i < n; i++) {
        string cmd;
        cin >> cmd;
        if (cmd == "push_back") {
            int num;
            cin >> num;
            v.push_back(num);
        }
        else if (cmd == "pop_back") {
            v.pop_back();
        }
        else if (cmd == "size") {
            cout << v.size() << '\n';
        }
        else if (cmd == "get") {
            int i;
            cin >> i;
            cout << v[i-1] << '\n';
        }
    }
    return 0;
}