
#include <iostream>
#include <string>
#include <climits>
#include <algorithm>
using namespace std;

/*
int num[6]; // index1 is 'a', 2 is 'b', ...
int mask[6];
int ans = INT_MIN;

string s;

void f(int idx) {
    if (idx == 6) {
        int tmp = num[s[0] - 'a'];
        for (auto i = 1; i < s.length(); i += 2) {
            if (s[i] == '+') {
                tmp += (tmp + num[s[i+1]-'a']);
            }
            else if (s[i] == '-') {
                tmp += (tmp - num[s[i+1]-'a']);
            }
            else if (s[i] == '*') {
                tmp += (tmp * num[s[i+1]-'a']);
            }
        }
        ans = max(ans, tmp);
        return;
    }


    if (mask[idx] == 0) {
        f(idx+1);
        return;
    }
    
    for (int i = 1; i <= 4; i++) {
        if (mask[idx] != 0){
            num[idx] = i;
            f(idx+1);
        }

    }

}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> s;
    for (auto i = 0; i < s.length(); i += 2) {
        mask[s[i] - 'a'] = 1;
    }
    f(0);
    cout << ans;
    return 0;
}
*/
#include <iostream>
#include <string>
#include <climits>
#include <algorithm>
using namespace std;

int num[6];  // num[0] for 'a', num[1] for 'b', ..., num[5] for 'f'
int mask[6];
int ans = INT_MIN;
string s;

void f(int idx) {
    if (idx == 6) {
        // Evaluate the expression using the assigned values in num[]
        int tmp = num[s[0] - 'a'];
        for (size_t i = 1; i < s.length(); i += 2) {
            char op = s[i];
            int val = num[s[i+1] - 'a'];
            if (op == '+') {
                tmp = tmp + val;
            } else if (op == '-') {
                tmp = tmp - val;
            } else if (op == '*') {
                tmp = tmp * val;
            }
        }
        ans = max(ans, tmp);
        return;
    }

    if (mask[idx] == 0) {
        // If this variable isn't used, just move on
        f(idx + 1);
        return;
    }

    for (int i = 1; i <= 4; i++) {
        num[idx] = i;
        f(idx + 1);
    }
}

int main() {
    cin >> s;
    for (size_t i = 0; i < s.length(); i += 2) {
        mask[s[i] - 'a'] = 1; // Mark variables used in the expression
    }

    f(0);
    cout << ans;
    return 0;
}
