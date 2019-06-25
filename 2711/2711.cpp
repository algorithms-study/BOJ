#include <iostream>

using namespace std;

int T;

int main() {
  cin >> T;

  for (int i = 0; i < T; i++) {
    int n;
    string s;
    cin >> n >> s;

    for (int j = 0; j < s.length(); j++) {
      if (j == n - 1) {
        continue;
      } 
      cout << s[j];
    }
    
    cout << '\n';
  }
}
