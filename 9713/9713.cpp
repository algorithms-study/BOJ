#include <iostream>

using namespace std;

int N;

int main() {
  cin >> N;

  for (int i = 0; i < N; i++) {
    int k, sum = 0;
    cin >> k;

    for (int j = 1; j <= k; j++) {
      if (j % 2 != 0) {
        sum += j;
      }
    }

    cout << sum << '\n';
  }
}
