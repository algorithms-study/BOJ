#include <iostream>

using namespace std;

int sum;

int main() {
  int minimum = 999999;

  for (int i = 0; i < 7; i++) {
    int n;
    cin >> n;

    if (n % 2 != 0) {
      if (minimum > n) {
        minimum = n;
      }

      sum += n;
    }
  }

  if (sum == 0) {
    cout << -1;
    return 0;
  }

  cout << sum << '\n' << minimum;
}
