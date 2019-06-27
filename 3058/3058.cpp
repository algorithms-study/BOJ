#include <iostream>

using namespace std;

int T;

int main() {
  cin >> T;

  for (int i = 0; i < T; i++) {
    int sum = 0, minimum = 1e9;

    for (int j = 0; j < 7; j++) {
      int n;
      cin >> n;


      if (n % 2 == 0) {
        sum += n;

        if (minimum > n) {
          minimum = n;
        }
      }
    }

    cout << sum << " " << minimum << '\n';
  }
}
