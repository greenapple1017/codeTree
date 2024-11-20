#include <iostream>
#include <string>
using namespace std;

struct Product {
    string name;
    int code;
};

int main() {
    // 여기에 코드를 작성해주세요.
    string name;
    int code;
    cin >> name >> code;
    Product p1{"codetree", 50}, p2{name, code};
    
    cout << "product " << p1.code << " is " << p1.name << '\n';
    cout << "product " << p2.code << " is " << p2.name;
    return 0;
}