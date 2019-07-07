#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, M;
vector<int> v;

int main() {
  cin >> N >> M;

  for (int i = 0; i < N; i++) {
    int x;
    cin >> x;

    v.push_back(x);
  }

  for (int i = 0; i < M; i++) {
    int x;
    cin >> x;

    v.push_back(x);
  }

  sort(v.begin(), v.end());

  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
}
