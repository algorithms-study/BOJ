#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  while (true) {
    char op;
    cin >> op;

    if (op == '=') {
      break;
    }

    int t;
    cin >> t;

    if (op == '+') {
      n += t;
    } else if (op == '-') {
      n -= t;
    } else if (op == '*') {
      n *= t;
    } else if (op == '/') {
      n /= t;
    }
  }

  cout << n;
}
