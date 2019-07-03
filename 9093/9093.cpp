#include <iostream>
#include <algorithm>

using namespace std;

int T;

int main() {
  cin >> T;
  getchar();

  for (int i = 0; i < T; i++) {
    string s, tmp;
    getline(cin, s);

    for (int j = 0; j < s.length(); j++) {
      if (s[j] == ' ') {
        reverse(tmp.begin(), tmp.end());
        cout << tmp << " ";
        tmp = "";
      } else {
        tmp += s[j];
      }
    }
    reverse(tmp.begin(), tmp.end());
    cout << tmp;

    cout << '\n';
  }
}
