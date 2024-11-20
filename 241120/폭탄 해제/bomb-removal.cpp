#include <string>
#include <iostream>
using namespace std;

class Bomb {
public:
    string code;
    char color;
    int second;

    Bomb(string code, char color, int second) : code{code}, color{color}, second{second} {}
    void Print() {
        cout << "code : " << this->code << endl;
        cout << "color : " << this->color << endl;
        cout << "second : " << this->second;
    }
};

int main() {
    // 여기에 코드를 작성해주세요.
    string code;
    char color;
    int second;
    cin >> code >> color >> second;
    Bomb b{code, color, second};
    b.Print();

    return 0;
}