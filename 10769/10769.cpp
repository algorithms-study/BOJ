#include <iostream>

using namespace std;

int happy, sad;
string s;

int main() {
  getline(cin, s);

  for (int i = 0; i < s.length(); i++) {
    if (s[i] == ':' && s[i + 1] == '-') {
      i++;
      if (s[i + 1] == ')') {
        happy++;
      } else if (s[i + 1] == '(') {
        sad++;
      }
    }
  }

  if (happy == 0 && sad == 0) {
    cout << "none";
    return 0;
  } else if (happy == sad) {
    cout << "unsure";
    return 0;
  }

  cout << (happy > sad ? "happy" : "sad");
}
