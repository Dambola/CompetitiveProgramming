#include <bits/stdc++.h>
#define llu long long int
#define MAXN 200010

using namespace std;

int visited[MAXN];
vector<int> graph[MAXN];
int n, m, v, u, cnt;

bool cycle_dfs (int v) {
    bool is_cycle = (graph[v].size() == 2);

    visited[v] = 1;
    for (auto u : graph[v]) {
        if (!visited[u]) {
            is_cycle &= cycle_dfs(u);
        }
    }

    return is_cycle;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        visited[i] = 0;
    }

    for (int i = 0; i < m; i++) {
        cin >> v >> u;
        graph[v].push_back(u);
        graph[u].push_back(v);
    }

    cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            if (cycle_dfs(i)) {
                cnt++;
            }
        }
    }
    cout << cnt << "\n";

    return 0;
}