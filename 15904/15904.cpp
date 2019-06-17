#include <iostream>

using namespace std;

string s;
int count;

int main() {
  getline(cin, s);

  for (int i = 0; i < s.length(); i++) {
    if ((count == 0 && s[i] == 'U') || (count == 1 && s[i] == 'C') || (count == 2 && s[i] == 'P') || (count == 3 && s[i] == 'C')){
      count++;
    } else if (s[i] == ' ') {
      continue;
    }

    if (count == 4) {
      cout << "I love UCPC";
      return 0;
    }
  }

  cout << "I hate UCPC";
  return 0;
}
