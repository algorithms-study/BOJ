#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
vector<pair<int, int> > v;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> N;

  v.resize(N);

  for (int i = 0; i < N; i++) {
    int x, y;
    cin >> x >> y;

    v[i] = make_pair(x, y);
  }

  sort(v.begin(), v.end());

  for (int i = 0; i < v.size(); i++) {
    cout << v[i].first << " " << v[i].second << '\n';
  }
}
