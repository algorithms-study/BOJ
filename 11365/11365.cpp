#include <iostream>

using namespace std;

string s;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  while (true) {
    getline(cin, s);

    if (s == "END") {
      break;
    }

    for (int i = s.length() - 1; i >= 0; i--) {
      cout << s[i];

      if (i == 0) {
        cout << '\n';
      }
    }
  }
}
