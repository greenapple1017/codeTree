#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    int a1 = s1.length(), a2 = s2.length(), a3 = s3.length(), max,min;
    if (a1 >= a2 && a1 >= a3) max = a1;
    else if (a2 >= a1 && a2 >= a3) max = a2;
    else max = a3;

    if (a1 <= a2 && a1 <= a3) min = a1;
    else if (a2 <= a1 && a2 <= a3) min = a2;
    else min = a3;
    
    cout << max - min;

    return 0;
}