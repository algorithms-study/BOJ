#include <iostream>

using namespace std;

int main() {
  while (true) {
    bool check = true;
    string s;
    cin >> s;

    if (s == "0") {
      break;
    }

    for (int i = 0; i < s.length() - 1; i++) {
      if (s[i] != s[s.length() - 1 - i]) {
        check = false;
        break;
      }
    }

    cout << (check ? "yes" : "no") << '\n';
  }
}
