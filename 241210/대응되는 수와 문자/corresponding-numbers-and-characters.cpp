#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int n, m;
unordered_map<string, int> str2int;
unordered_map<int, string> int2str;


int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        string s;
        cin >> s;
        str2int[s] = i;
        int2str[i] = s;
    }
    for (int i = 0; i < m; i++) {
        string s;
        cin >> s;
        // 이 부분 어떻게 처리해야되지???
        // string은 특별한 게 아니라 그냥 'char의 sequence'이다. 
        // char은 내부적으로는 사실 interger이다. (4바이트 int type이라는 게 아니라 그냥 숫자라는 뜻)
        // ASCII table에 1대1 대응되는 숫자를 찾을 수 있다. 
        // 예를 들어 char c = 'A' 이렇게 하면 c에는 65라는 값이 저장된다.
        // int ascii_value = c 이렇게 하면 65라는 값이 복사된다. 
        
        // 첫번째 char가 숫자면 숫자가 들어온 것으로 판단 가능.
        if (s[0] >= '0' && s[0] <= '9') {
            // std::stoi를 사용하자.
            cout << int2str[stoi(s)] << '\n';
        }
        else {
            cout << str2int[s] << '\n';
        }
        

    }

    return 0;
}