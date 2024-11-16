#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    float a,b;
    cin >> a >> b;
    
    cout << fixed;
    cout.precision(2);
    float ans = (a+b) / (a-b);
    cout << ans;
    return 0;
}