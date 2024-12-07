#include <iostream>
#include <vector>
using namespace std;

#define MAX_N 1000

int n,m;
vector<int> graph[MAX_N+1]; // using index from 1
int visited[MAX_N+1];
int cnt;

void Dfs(int vertex) {
    for (auto i = 0; i < graph[vertex].size(); i++) {
        int cur = graph[vertex][i];
        if (visited[cur] != 1) {
            visited[cur] = 1;
            cnt++;
            Dfs(cur);
        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> m;
    // There are m edges.
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    visited[1] = 1;
    Dfs(1);
    cout << cnt;

    
    return 0;
}