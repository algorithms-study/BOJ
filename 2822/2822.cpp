#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int sum;
vector<pair<int, int> > v;

int main() {
  for (int i = 0; i < 8; i++) {
    int n;
    cin >> n;

    v.push_back(make_pair(n, i + 1));
  }

  sort(v.begin(), v.end(), greater<pair<int, int>>());

  vector<int> storage;
  storage.resize(5);
  storage[0] = v[0].second;
  storage[1] = v[1].second;
  storage[2] = v[2].second;
  storage[3] = v[3].second;
  storage[4] = v[4].second;

  sort(storage.begin(), storage.end());

  cout << v[0].first + v[1].first + v[2].first  + v[3].first  + v[4].first << '\n';

  for (int i = 0; i < storage.size(); i++) {
    cout << storage[i] << ' ';
  }
}
