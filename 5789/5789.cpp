#include <iostream>

using namespace std;

int N;

int main() {
  cin >> N;

  for (int i = 0; i < N; i++) {
    string s;
    cin >> s;

    cout << (s[s.length() / 2] == s[s.length() / 2 - 1] ? "Do-it" : "Do-it-Not") << '\n';
  }
}
