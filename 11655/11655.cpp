#include <iostream>

using namespace std;

string s;

int main() {
  getline(cin, s);

  for (int i = 0; i < s.length(); i++) {
    if (s[i] >= 'A' && s[i] <= 'Z') {
      s[i] = (s[i] + 13) > 'Z' ? s[i] - 13 : s[i] + 13;
    } else if (s[i] >= 'a' && s[i] <= 'z') {
      s[i] = (s[i] + 13) > 'z' ? s[i] - 13 : s[i] + 13;
    }
  }

  cout << s;
}
