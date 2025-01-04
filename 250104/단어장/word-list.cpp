#include <iostream>
#include <map>
#include <string>
using namespace std;

map<string, int> freq;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        freq[s]++;
    }
    for (auto p : freq) {
        cout << p.first << ' ' << p.second << '\n';
    }
    return 0;
}