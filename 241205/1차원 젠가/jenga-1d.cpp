#include <iostream>
using namespace std;

#define MAX_N 105

int n;
int blk[MAX_N];
int tmp[MAX_N];
int tmp_cur;

void Print() {
    cout << tmp_cur << '\n';
    for (int i = 0; i < tmp_cur; i++) {
        cout << blk[i] << '\n';
    }
}


void Remove(int st, int en) {
    // 인덱스 주의!!
    for (int i = st; i <= en; i++) {
        blk[i] = -1;
    }
    int tmp_ = 0;
    for (int i = 0; i < tmp_cur; i++) {
        if (blk[i] != -1) {
            tmp[tmp_++] = blk[i]; 
        }
    }
    tmp_cur = tmp_;
    for (int i = 0; i < tmp_cur; i++) {
        blk[i] = tmp[i];
    }

    //Print();
}


int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    tmp_cur = n;
    for (int i = 0; i < n; i++) {
        cin >> blk[i];
    }
    for (int i = 0; i < 2; i++) {
        int st, en;
        cin >> st >> en;
        st--; en--;
        Remove(st, en);
    }
    Print();


    return 0;
}