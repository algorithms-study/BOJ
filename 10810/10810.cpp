#include <iostream>
#include <vector>

using namespace std;

int N, M;
vector<int> v;

int main() {
  cin >> N >> M;

  v.resize(N + 1);

  while (M--) {
    int i, j, k;
    cin >> i >> j >> k;

    for (int a = i; a <= j; a++) {
      v[a] = k;
    }
  }
  
  for (int i = 1; i < v.size(); i++) {
    cout << v[i] << " ";
  }
}
