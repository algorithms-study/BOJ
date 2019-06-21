#include <iostream>

using namespace std;

int T;

int main() {
  cin >> T;

  for (int i = 0; i < T; i++) {
    int A, B, C, D, E;
    cin >> A >> B >> C >> D >> E;

    cout << fixed;
    cout.precision(2);
    cout << '$' << (350.34 * A) + (230.90 * B) + (190.55 * C) + (125.30 * D) + (180.90 * E) << '\n';
  }
}
