#include <iostream>

using namespace std;

int T;
string s;

int main() {
  cin >> T;
  getchar();

  cout << fixed;
  cout.precision(2);

  for (int i = 0; i < T; i++) {
    double x;
    string tmp = "";
    getline(cin, s);

    for (int j = 0; j < s.length(); j++) {
      if (s[j] == ' ') {
        if (s[j - 1] == '@') {
          x *= 3; 
        } else if (s[j - 1] == '%') {
          x += 5;
        } else if (s[j - 1] == '#') {
          x -= 7;
        } else {
          x = stod(tmp);
        }
      } else {
        tmp += s[j];
      }
    }

    if (s[s.length() - 1] == '@') {
      x *= 3;
    } else if (s[s.length() - 1] == '%') {
      x += 5;
    } else if (s[s.length() - 1] == '#') {
      x -= 7;
    }

    cout << x << '\n';
  }
}
