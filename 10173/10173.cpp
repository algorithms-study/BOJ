#include <iostream>

using namespace std;

string s;

int main() {
  while (true) {
    getline(cin, s);

    if (s == "EOI") {
      break;
    }

    bool check = false;
    for (int i = 0; i < s.length(); i++) {
      if ((s[i] == 'n' || s[i] == 'N') && (s[i + 1] == 'e' || s[i + 1] == 'E') && (s[i + 2] == 'm' || s[i + 2] == 'M') && (s[i + 3] == 'o' || s[i + 3] == 'O')) {
        check = true;
      }
    }

    cout << (check ? "Found" : "Missing") << '\n';
  }
}
