#include <iostream>

using namespace std;

string s;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  
  cin >> s;

  for (int i = 0; i < s.length(); i++) {
    s[i] -= 3;

    if (s[i] < 'A') {
      s[i] += 26;
    }
  }

  cout << s;
}
