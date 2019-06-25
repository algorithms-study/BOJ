#include <iostream>

using namespace std;

int m, d;

int main() {
  cin >> m;
  cin >> d;

  if (m == 2) {
    if (d == 18) {
      cout << "Special";
    } else if (d < 18) {
      cout << "Before";
    } else {
      cout << "After";
    }
    return 0;
  }

  if (m > 2) {
    cout << "After";
  } else {
    cout << "Before";
  }
}
