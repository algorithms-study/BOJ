#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int T;

int main() {
  cin >> T;

  for (int i = 0; i < T; i++) {
    vector<int> v;
    v.resize(10);
    for (int j = 0; j < 10; j++) {
      int A;
      cin >> A;

      v[j] = A;
    }

    sort(v.begin(), v.end(), greater<int>());

    cout << v[2] << '\n';
  }
}
