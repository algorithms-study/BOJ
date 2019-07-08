#include <iostream>

using namespace std;

int food_min = 1e9;
int drink_min = 1e9;

int main() {
  for (int i = 0; i < 3; i++) {
    int x;
    cin >> x;

    if (food_min > x) {
      food_min = x;
    }
  }

  for (int i = 0; i < 2; i++) {
    int x;
    cin >> x;

    if (drink_min > x) {
      drink_min = x;
    }
  }

  cout << food_min + drink_min - 50;  
}
