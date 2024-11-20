#include <iostream>
using namespace std;

class Agent {
public:
    char codeName;
    int score;

    Agent(char c, int s) : codeName{c}, score{s} {}
    Agent() {}
};

int main() {
    // 여기에 코드를 작성해주세요.
    char c;
    int s;
    Agent agentList[5];
    for (int i = 0; i < 5; i++) {
        cin >> c >> s;
        agentList[i] = Agent(c,s);
    }
    int min = 999;
    char min_agent;
    for (Agent person : agentList) {
        if (person.score < min) {
            min = person.score;
            min_agent = person.codeName;
        }
    }
    cout << min_agent << " " << min;
    return 0;
}