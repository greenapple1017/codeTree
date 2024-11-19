#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string id;
    int level;

public:
    Person(string id = "codetree", int level = 10) {
        this->id = id;
        this->level=level;
    }

    void print() {
        cout << "user " << this->id << " lv " << this->level << endl;
    }
};

int main() {
    // 여기에 코드를 작성해주세요.
    string id;
    int level;
    cin >> id >> level;
    Person p1, p2{id, level};
    p1.print();
    p2.print();
    return 0;
}