#include <iostream>

using namespace std;

int T;

int main() {
  cin >> T;

  for (int i = 0; i < T; i++) {
    int s, n, sum = 0;
    cin >> s;
    cin >> n;

    for (int j = 0; j < n; j++) {
      int q, p;
      cin >> q >> p;

      sum += q * p;
    }

    cout << sum + s << '\n';
  }
}
