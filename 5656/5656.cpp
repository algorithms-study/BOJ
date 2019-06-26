#include <iostream>

using namespace std;

int i;

int main() {
  while (true) {
    int a, b;
    string op;
    bool result = true;
    cin >> a >> op >> b;

    if (op == "E") {
      break;
    }

    if (op == ">") {
      result = a > b;
    } else if (op == ">=") {
      result = a >= b;
    } else if (op == "<") {
      result = a < b;
    } else if (op == "<=") {
      result = a <= b;
    } else if (op == "==") {
      result = a == b;
    } else {
      result = a != b;
    }

    cout << "Case " << ++i << ": " << (result == 0 ? "false" : "true") << '\n';
  }
}
