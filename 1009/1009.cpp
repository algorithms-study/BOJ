#include <iostream>

using namespace std;

int T;

int main() {
  cin >> T;

  for (int i = 0; i < T; i++) {
    int a, b, tmp = 1;
    cin >> a >> b;

    for (int j = 0; j < b; j++) {
      tmp = (tmp * a) % 10;
    }

    cout << (tmp == 0 ? 10 : tmp) << '\n';
  }
}
