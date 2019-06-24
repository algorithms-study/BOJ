#include <iostream>

using namespace std;

int count;

int main() {
  for (int i = 0; i < 8; i++) {
    string s;
    cin >> s;

    for (int j = 0; j < 8; j++) {
      if (s[j] == 'F' && (i + j) % 2 == 0) {
        count++;
      }
    }
  }

  cout << count;
}
