#include <iostream>
#include <string>
using namespace std;

class Secret {
private:
    string code;
    char place;
    int time;

public:
    Secret(string c, char p, int t) : code{c}, place{p}, time{t} {}

    void Print() {
        cout << "secret code : " << code << endl;
        cout << "meeting point : " << place << endl;
        cout << "time : " << time << endl;
    }
    

};

int main() {
    // 여기에 코드를 작성해주세요.
    string code;
    char place;
    int time;
    cin >> code >> place >> time;
    Secret s{code, place, time};
    s.Print();

    return 0;
}