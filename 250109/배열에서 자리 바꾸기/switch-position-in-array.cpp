#include <iostream>
using namespace std;
#define MAX_N 250000

int n, q;
int a[MAX_N], b[MAX_N], c[MAX_N], d[MAX_N];

struct Node {
    int data;
    Node *prev, *next;
} head, tail, pool[MAX_N];

void init() {
    head.next = &pool[0];
    pool[0].prev = &head;
    tail.prev = &pool[n - 1];
    pool[n - 1].next = tail;
    for (int i = 0; i < n; i++) {
        pool[i].
    }
}

int main() {
    // Please write your code here.
    cin >> n >> q;
    for (int i = 0; i < q; i++) {
        cin >> a[i] >> b[i] >> c[i] >> d[i];
        
    }
    return 0;
}