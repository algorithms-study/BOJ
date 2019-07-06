#include <iostream>

using namespace std;

int money = 5000;

int main() {
  int x;
  while (cin >> x) {
    if (x == 1) {
      money -= 500;
    } else if (x == 2) {
      money -= 800;
    } else {
      money -= 1000;
    }
  }

  cout << money;
}
