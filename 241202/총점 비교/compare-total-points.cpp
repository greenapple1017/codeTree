#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct Student{
    string name;
    int kor;
    int eng;
    int math;
};

Student students[15];

bool Cmp(const Student &a, const Student &b) {
    return a.kor + a.eng + a.math < b.kor + b.eng + b.math;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> students[i].name
            >> students[i].kor
            >> students[i].eng
            >> students[i].math;
    }
    sort(students, students + n, Cmp);
    for (int i = 0; i < n; i++) {
        cout << students[i].name << ' '
            << students[i].kor << ' '
            << students[i].eng << ' '
            << students[i].math << '\n';       
    }

    return 0;
}