#include <iostream>
#include <cmath>

using namespace std;

int T;

int main() {
  cin >> T;

  for (int i = 0; i < T; i++) {
    int d, t = 0;
    cin >> d;

    while (true) {
      if (d < pow(t, 2) + t) {
        break;
      }

      t++;
    }

    cout << t - 1 << '\n';
  }
}
