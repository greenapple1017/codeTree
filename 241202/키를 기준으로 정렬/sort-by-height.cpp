#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct Person{
    string name;
    int height;
    int weight;
};

bool Cmp(const Person &a, const Person &b) {
    return a.height < b.height;
}

Person persons[15];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> persons[i].name
            >> persons[i].height
            >> persons[i].weight;
    }
    sort(persons, persons+n, Cmp);
    for (int i = 0; i < n; i++) {
        cout << persons[i].name << ' '  
             << persons[i].height << ' '
             << persons[i].weight << '\n'; 
    }
    return 0;
}