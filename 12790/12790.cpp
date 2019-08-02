#include <iostream>

using namespace std;

int T;

int main() {
  cin >> T;

  for (int i = 0; i < T; i++) {
    int a, b, c, d, e, f, g, h;
    cin >> a >> b >> c >> d >> e >> f >> g >> h;

    cout << (1 * (a + e < 1 ? 1 : a + e)) + (5 * (b + f < 1 ? 1 : b + f)) + (2 * (c + g < 0 ? 0 : c + g)) + (2 * (d + h)) << '\n';
  }
}
