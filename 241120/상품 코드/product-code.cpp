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
    Product p{name, code};
    cout << "product " << p.name << " is codetree\n";
    cout << "product " << p.code << " is leebros";
    return 0;
}