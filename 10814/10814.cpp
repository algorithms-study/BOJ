#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
vector<pair<int, string> > v;

bool compare(pair<int, string> p1, pair<int, string> p2) {
  if (p1.first == p2.first) {
    return false;
  } else if (p1.first > p2.first) {
    return false;
  } 

  return true;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> N;

  v.resize(N);

  for (int i = 0; i < N; i++) {
    int age;
    string name;

    cin >> age >> name;
    v[i] = make_pair(age, name);
  }

  // no sort use stable_sort
  // sort: 순서 보장 X
  // stable_sort: 순서 보장 O
  stable_sort(v.begin(), v.end(), compare);

  for (int i = 0; i < N; i++) {
    cout << v[i].first << " " << v[i].second << '\n';
  }
}
