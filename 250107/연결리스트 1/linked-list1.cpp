#include <iostream>
#include <string>
using namespace std;

struct Node {
    string data;
    Node *prev = nullptr;
    Node *next = nullptr;
} pool[250000];

void PushFront(string &val, Node *cur) {
    Node *new_node = pool[p_cnt++];
    new_node.data = val;
    new_node.next = cur;
    cur->prev = new_node;
}

void PushBack(string &val, Node *cur) {
    Node *new_node = pool[p_cnt++];
    new_node.data = val;
    new_node.prev = cur;
    cur->next = new_node;
}

int p_cnt = 1;
int n;

int main() {
    // Please write your code here.
    string S_init;
    cin >> S_init;
    Node *cur = &pool[0];
    cur->data = S_init;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int cmd;
        cin >> cmd;
        if (cmd == 1) {
            string s;
            cin >> s;
            PushFront(s, )
        }
    }
    return 0;
}