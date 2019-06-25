#include <iostream>

using namespace std;

int n;

int main() {
  cin >> n;

  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
      s[i] += 1;

      if (s[i] > 'Z') {
        s[i] = 'A';
      }
    }

    cout << "String #" << i + 1 << '\n' << s;

    if (i != s.length() - 1) {
      cout << '\n' << '\n';
    }
  }
}
