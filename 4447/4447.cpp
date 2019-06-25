#include <iostream>

using namespace std;

int n;

int main() {
  cin >> n;
  getchar();

  for (int i = 0; i < n; i++) {
    int good = 0, baddy = 0;
    string s;
    getline(cin, s);

    for (int j = 0; j < s.length(); j++) {
      if (s[j] == 'g' || s[j] == 'G') {
        good++;
      } else if (s[j] == 'b' || s[j] == 'B') {
        baddy++;
      }
    }
    
    if (good > baddy) {
      cout << s << " is GOOD" << '\n';
    } else if (good < baddy) {
      cout << s << " is A BADDY" << '\n';
    } else {
      cout << s << " is NEUTRAL" << '\n';
    }
  }
}
