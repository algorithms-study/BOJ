#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int T;

int main() {
  cin >> T;

  for (int i = 0; i < T; i++) {
    int N;
    int maximum = -1e9, pointer = 0, sum = 0;
    bool duplicate = false;
    cin >> N;

    vector<int> v;
    v.resize(N);

    for (int j = 0; j < N; j++) {
      cin >> v[j];

      sum += v[j];

      if (v[j] > maximum) {
        maximum = v[j];
        pointer = j + 1;
      }
    }

    sort(v.begin(), v.end(), greater<int>());

    if (v[0] == v[1]) {
      cout << "no winner" << '\n';
    } else if (maximum > (sum / 2)) {
      cout << "majority winner " << pointer << '\n';
    } else {
      cout << "minority winner " << pointer << '\n';
    }
  }
}
