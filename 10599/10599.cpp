#include <iostream>

using namespace std;

int main() {
  while(true) {
    int a, b, c, d, maximum = -1e9, minimum = 1e9;
    cin >> a >> b >> c >> d;

    if (a == 0 && b == 0 && c == 0 && d == 0) {
      break;
    } 

    cout << c - b << ' ' << d - a << '\n';
  }
}
