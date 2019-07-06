#include <iostream>

using namespace std;

int main() {
  while (true) {
    int sum = 2;
    string s;
    cin >> s;

    if (s == "0") {
      break;
    }

    for (int i = 0; i < s.length(); i++) {
      if (s[i] == '0') {
        sum += 4;
      } else if (s[i] == '1') {
        sum += 2;
      } else {
        sum += 3;
      }
    }

    cout << sum + s.length() - 1 << '\n';
  }
}
