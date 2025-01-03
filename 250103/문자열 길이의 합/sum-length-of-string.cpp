#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int tot = 0, num = 0;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (s[0] == 'a') num++;
        tot += s.length();
    }
    cout << tot << ' ' << num;
    return 0;
}