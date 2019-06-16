#include <iostream>

using namespace std;

string s;
int l, r;
bool flag = false; // false = left, true = right

int main() {
  cin >> s;

  for (int i = 0; i < s.length(); i++) {
    if (s[i] == '@') {
      if (flag) {
        r++;
      } else {
        l++;
      }
    }

    if (s[i] == '(') {
      flag = true;
    }
  }

  cout << l << " " << r;
}
