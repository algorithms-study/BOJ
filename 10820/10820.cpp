#include <iostream>

using namespace std;

string s;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  while (true) {
    int upper = 0, lower = 0, number = 0, space = 0;
    getline(cin, s);

    if (s == "") {
      break;
    }
    
    for (int i = 0; i < s.length(); i++) {
      if (s[i] >= 'A' && s[i] <= 'Z') {
        upper++;
      } else if (s[i] >= 'a' && s[i] <= 'z') {
        lower++;
      } else if (s[i] == ' ') {
        space++;
      } else {
        number++;
      }
    }
    
    cout << lower << " " << upper << " " << number << " " << space << '\n';
  }
}
