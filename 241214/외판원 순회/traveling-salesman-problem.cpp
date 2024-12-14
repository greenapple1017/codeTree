#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;


int n;
int graph[11][11]; // using index from 1
int ans = INT_MAX;
int cost;
bool visited[11]; // using index from 1


void Dfs(int cur_vertex, int num_visited) {
    // 마지막에서 1로 무조건 돌아올 수 있다고 가정되는 건가??
    if (num_visited == n) {
        if (graph[cur_vertex][1] != 0) {
            // 아 여기서 cost값을 바꾸면 안되는구나...
            cost += graph[cur_vertex][1];
            ans = min(ans, cost);
            cost -= graph[cur_vertex][1]; // 할거면 다시 이렇게 backtrack 해줘야하는구나..
        }
        return;
    }
    for (int i = 1; i <= n; i++) {
        // !graph[cur_vertex][i]로 해버렸다 이러면 0일 때 참이잖아
        if (!visited[i] && graph[cur_vertex][i]) {
            cost += graph[cur_vertex][i];
            visited[i] = 1;
            Dfs(i, num_visited + 1);
            visited[i] = 0;
            cost -= graph[cur_vertex][i];
        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> graph[i][j];
        }
    }
    visited[1] = 1;
    Dfs(1, 1);
    cout << ans;
    return 0;
}