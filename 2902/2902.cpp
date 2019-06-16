#include <iostream>

using namespace std;

string s;

int main() {
  cin >> s;
  
  for (int i = 0; i < s.length(); i++) {
    if (s[i] >= 'A' && s[i] <= 'Z') {
      cout << s[i];
    }
  }
}
