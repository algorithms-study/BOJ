#include <iostream>

using namespace std;

int T;

int main() {
  cin >> T;

  for (int i = 0; i < T; i++) {
    int total = 0, N, K;
    cin >> N >> K;

    for (int j = 0; j < N; j++) {
      int candy;
      cin >> candy;

      total += candy / K;
    }

    cout << total << '\n';
  }
}
