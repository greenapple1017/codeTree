#include <iostream>
#include <algorithm>
using namespace std;

int arr[105];

// '배열의 원소 개수'를 매개변수로 하면 못푼다. 
// '배열의 인덱스'를 매개변수로 설정해야지 풀린다. 
// 그럼 이제 이 함수는 '0부터 idx 까지의 숫자중 최대값을 반환하는 함수'이다. 
// 파라미터를 어떻게 설정하며 함수의 의미를 어떻게 정의하느냐가 중요. 
int MaxElemArr(int idx) {
    // 원소가 한 개뿐이므로 최대값이 그 원소임은 자명하다. 
    if (idx == 0) return arr[0];

    return max(arr[idx], MaxElemArr(idx-1));

}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << MaxElemArr(n-1);
    
    return 0;
}