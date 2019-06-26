#include <iostream>

using namespace std;

int x, y, maximum = -1e9;

int main() {
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      int N;
      cin >> N;

      if (maximum < N) {
        maximum = N;
        x = i;
        y = j;
      }
    }
  }

  cout << maximum << '\n' << x + 1 << " " << y + 1;
}
