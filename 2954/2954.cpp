#include <iostream>

using namespace std;

string s;

int main() {
  getline(cin, s);

  for (int i = 0; i < s.length(); i++) {
    if (s[i] == ' ') {
      cout << ' ';
      continue;
    }

    if ((s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') && s[i + 1] == 'p') {
      i += 2;
    } 
    
    cout << s[i];
  }
}
