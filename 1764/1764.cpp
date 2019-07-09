#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, M;
vector<string> v;
vector<string> v2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> N >> M;

  v.resize(N);

  for (int i = 0; i < N; i++) {
    cin >> v[i];
  }

  sort(v.begin(), v.end());

  for (int i = 0; i < M; i++) {
    string s;
    cin >> s;

    if (binary_search(v.begin(), v.end(), s)) {
      v2.push_back(s);
    }
  }

  sort(v2.begin(), v2.end());

  cout << v2.size() << '\n';

  for (int i = 0; i < v2.size(); i++) {
    cout << v2[i] << '\n';
  }
}
