#include <iostream>
#include <vector>

using namespace std;

int N, M, V;
vector<vector<int> > G;
vector<bool> dfs_visit;
vector<bool> bfs_visit;

void DFS(int v) {
  dfs_visit[v] = true;
  cout << v << ' ';

  for (int i = 1; i <= N; i++) {
    if (G[v][i] == 1 && ! dfs_visit[i]) {
      DFS(i);
    }
  }
}

int main() {
  cin >> N >> M >> V;

  G.resize(N + 1);
  dfs_visit.resize(N + 1);
  bfs_visit.resize(N + 1);
  for (int i = 1; i <= N; i++) {
    G[i].resize(N + 1);
  }

  for (int i = 0; i < M; i++) {
    int x, y;
    cin >> x >> y;
    G[x][y] = 1;
    G[y][x] = 1;
  }

  DFS(V);
  cout << endl;

  int head = 0;
  vector<int> queue;
  queue.push_back(V);
  bfs_visit[V] = true;

  while (head < queue.size()) {
    int v = queue[head];
    head++;
    cout << v << ' ';

    for (int i = 1;  i <= N; i++) {
      if (G[v][i] == 1 && ! bfs_visit[i]) {
        bfs_visit[i] = true;
        queue.push_back(i);
      }
    }
  }
  cout << endl;
}
