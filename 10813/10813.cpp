#include <iostream>
#include <vector>

using namespace std;

int N, M;
vector<int> v;

int main() {
  cin >> N >> M;

  v.resize(N);

  for (int i = 0; i < v.size(); i++) {
    v[i] = i + 1;
  }

  for (int i = 0; i < M; i++) {
    int x, y;
    cin >> x >> y;

    swap(v[x - 1], v[y - 1]);
  }

  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
}
