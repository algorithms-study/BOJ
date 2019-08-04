#include <iostream>

using namespace std;

int X, sum;

int main() {
  cin >> X;

  while (X != 0) {
    if (X % 2 != 0) {
      sum++;
    }
    
    X /= 2;
  }

  cout << sum;
}
