#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
vector<pair<int, int> > v;

bool compare(const pair<int, int> p1, const pair<int,int> p2) {
  if (p1.second < p2.second) {
    return true;
  } else if (p1.second == p2.second) {
    if (p1.first < p2.first) {
      return true;
    }
  }

  return false;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> N;

  for (int i = 0; i < N; i++) {
    int x, y;
    cin >> x >> y;

    v.push_back(make_pair(x, y));
  }

  sort(v.begin(), v.end(), compare);

  for (int i = 0; i < N; i++) {
    cout << v[i].first << " " << v[i].second << '\n';
  }
}
