#include <iostream>
#include <string>
using namespace std;

int ans;

int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    cin >> a;
    for (auto i = 0; i < a.length()-1; i++) {
        if (a[i] == '(' && a[i+1] == '(') {
            for (auto j = 2; j < a.length()-1; j++) {
                if (a[j] == ')' && a[j+1] == ')') ans++;
            }
        }
    }
    cout << ans;
    return 0;
}