#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  while (true) {
    int N;
    cin >> N;

    if (N == 0) {
      break;
    }

    vector<int> v;
    int prev = 0;
    for (int i = 0; i < N; i++) {
      int a;
      cin >> a;

      if (i == 0) {
        v.push_back(a);
        prev = a;
        continue;
      }

      if (i >= 1 && prev != a) {
        v.push_back(a);
      }

      prev = a;
    }

    for (int i = 0; i < v.size(); i++) {
      cout << v[i] << " ";

      if (v.size() - 1 == i) {
        cout << "$" << '\n';
      }
    }
  }
}
