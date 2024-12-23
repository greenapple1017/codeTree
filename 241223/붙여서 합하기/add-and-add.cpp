#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a, b;
    cin >> a >> b;
    cout << stoi(a+b) + stoi(b+a);
    return 0;
}