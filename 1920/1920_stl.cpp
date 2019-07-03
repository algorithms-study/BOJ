#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N, M;
vector<int> v;

int main() {
  cin.tie(NULL);
  
  cin >> N;

  v.resize(N);

  for (int i = 0; i < N; i++) {
    cin >> v[i];
  }

  sort(v.begin(), v.end());

  cin >> M;

  for (int i = 0; i < M; i++) {
    int a;
    cin >> a;

    cout << (binary_search(v.begin(), v.end(), a) ? 1 : 0) << '\n';
  }
}
