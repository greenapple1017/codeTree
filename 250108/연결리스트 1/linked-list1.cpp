#include <iostream>
#include <string>
using namespace std;


int p_cnt = 1;
int n;

struct Node {
    string data;
    Node *prev = nullptr;
    Node *next = nullptr;
} pool[250000];

void PushFront(string &val, Node *cur) {
    Node *new_node = &pool[p_cnt++];
    new_node->data = val;
    if (cur->prev != 0) {
        new_node->prev = cur->prev;
        cur->prev->next = new_node;
    }
    new_node->next = cur;
    cur->prev = new_node;
}

void PushBack(string &val, Node *cur) {
    Node *new_node = &pool[p_cnt++];
    new_node->data = val;
    if (cur->next != 0) {
        new_node->next = cur->next;
        cur->next->prev = new_node;
    }
    new_node->prev = cur;
    cur->next = new_node;
}

void Print(Node *cur) {
    if (cur->prev != 0) {
        cout << cur->prev->data;
    }
    else {
        cout << "(Null)";
    }
    cout << ' ';
    cout << cur->data;
    cout << ' ';
    if (cur->next != 0) {
        cout << cur->next->data;
    }
    else {
        cout << "(Null)";
    }

}


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
            PushFront(s, cur);
        }
        else if (cmd == 2) {
            string s;
            cin >> s;
            PushBack(s, cur);
        }
        else if (cmd == 3) {
            if (cur->prev != 0) cur = cur->prev;
        }
        else if (cmd == 4) {
            if (cur->next != 0) cur = cur->next;
        }
        Print(cur);
        cout << '\n';
    }
    return 0;
}