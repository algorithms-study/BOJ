#include <iostream>
#include <cmath>

using namespace std;

int N;

int main() {
  cin >> N;

  while (true) {
    int x;
    cin >> x;

    if (x == 0) {
      break;
    }

    if (x % N != 0) {
      cout << x << " is NOT a multiple of " << N << '.' << '\n';
    } else {
      cout << x << " is a multiple of " << N << '.' << '\n';
    }
  }
}
