#include <iostream>

using namespace std;

string s;

int main() {
  while (true) {
    int count = 0;    
    getline(cin, s);

    if (s == "#") {
      break;
    }

    for (int i = 0; i < s.length(); i++) {
      if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U') {
        count++;
      }
    }

    cout << count << '\n';
  }
}
