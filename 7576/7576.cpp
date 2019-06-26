#include <iostream>

using namespace std;

int result;
string s;

int main() {
  cin >> s;

  for (int i = 0; i < s.length(); i++) {
    if (s[i] == s[i + 1]) {
      result += 5;
    } else {
      result += 10;
    }
  }

  cout << result;
}
