#include <iostream>
#include <vector>

using namespace std;

int N, v, count;
vector<int> s;

int main() {
  ios::sync_with_stdio(false);

  cin >> N;

  for (int i = 0; i < N; i++) {
    int k;
    cin >> k;

    s.push_back(k);
  }

  cin >> v;

  for (int i = 0; i < s.size(); i++) {
    if (s[i] == v) {
      count++;
    }
  }

  cout << count;
}
