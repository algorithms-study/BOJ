#include <iostream>

using namespace std;

int T;

int main() {
  cin >> T;

  for (int i = 0; i < T; i++) {
    int N, sum = 0;
    cin >> N;

    for (int j = 0; j < N; j++) {
      int k;
      cin >> k;
      sum += k;
    }

    cout << sum << '\n';
  }
}
