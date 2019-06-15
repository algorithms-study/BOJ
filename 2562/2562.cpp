#include <iostream>

#define MAXIMUM 9

using namespace std;

int big, position;

int main() {
  for (int i = 0; i < MAXIMUM; i++) {
    int k;
    cin >> k;

    if (i == 0) {
      big = k;
      position = i + 1;
    } else {
      if (big < k) {
        big = k;
        position = i + 1;
      }
    }
  }

  cout << big << '\n' << position;
}
