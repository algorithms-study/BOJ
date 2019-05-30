#include <iostream>

using namespace std;

int iron, sum;

int main() {
  string s;

  cin >> s;

  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '(' && s[i + 1] == ')') {
      sum += iron, i++;
    } else if (s[i] == '(') {
      iron++, sum++;
    } else if (s[i] == ')') {
      iron--;
    }
  }

  cout << sum;
}
