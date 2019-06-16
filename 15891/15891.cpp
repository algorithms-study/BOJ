#include <iostream>

using namespace std;

int N;

int main() {
  cin >> N;

  switch (N) {
    case 1:
      cout << 65;
      break;
    case 2:
      cout << 17;
      break;
    case 3:
    case 4:
      cout << 4;
      break;
    case 5:
      cout << 64;
      break;
  }
}
