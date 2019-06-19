#include <iostream>

using namespace std;

int main() {
  double prev;
  cin >> prev;

  while (true) {
    double n;
    cin >> n;
    cout << fixed;
    cout.precision(2);

    if (n == 999) {
      break;
    }

    cout << n - prev << '\n';

    prev = n;
  }
}
